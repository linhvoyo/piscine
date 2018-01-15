/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 18:33:57 by lilam             #+#    #+#             */
/*   Updated: 2017/11/12 22:21:48 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

char	*infix_to_postfix(char *str)
{
	ITP_VARS;
	while (str[i])
	{
		if (str[i] == '(')
			push(stack, str[i]);
		else if (str[i] == ')')
		{
			while (!is_empty(stack) && view(stack) != '(')
				str[++k] = pop(stack);
			pop(stack);
		}
		else if (IS_OPERATOR(str[i]) == 0)
			str[++k] = str[i];
		else
		{
			while (!is_empty(stack) && pemdas(str[i]) <= pemdas(view(stack)))
				str[++k] = pop(stack);
			push(stack, str[i]);
		}
		i++;
	}
	while (!is_empty(stack))
		str[++k] = pop(stack);
	str[++k] = '\0';
	return (str);
}

char	**str_to_arr(char *str)
{
	STR_VARS;
	while (str[length])
	{
		if (IS_OPERATOR(str[length]))
			sign++;
		length++;
	}
	temp = malloc(sizeof(temp) * (sign * 2) + length + 1);
	length = 0;
	sign = 0;
	while (str[length])
	{
		if (IS_OPERATOR(str[length]))
		{
			temp[sign++] = ' ';
			temp[sign++] = str[length++];
			temp[sign++] = ' ';
		}
		else
			temp[sign++] = str[length++];
	}
	return (ft_split_whitespaces(temp));
}

int		evaluate_postfix(char **str)
{
	int		length;
	int		i;
	t_stack	*stack;
	int		left;
	int		right;

	left = 0;
	right = 0;
	length = 0;
	while (str[length])
		length++;
	stack = create_stack(length);
	i = -1;
	while (str[++i])
	{
		if (str[i][0] >= '0' && str[i][0] <= '9')
			push(stack, ft_atoi(str[i]));
		else
		{
			left = pop(stack);
			right = pop(stack);
			push(stack, do_op(right, left, str[i][0]));
		}
	}
	return (pop(stack));
}

char	*add_space(char *str)
{
	char	*temp;
	int		i;

	temp = malloc(sizeof(temp) * (strlength(str) + 2));
	temp[0] = ' ';
	i = 1;
	while (*str)
		temp[i++] = *str++;
	temp[i] = '\0';
	return (temp);
}

int		eval_expr(char *str)
{
	char **arr;

	arr = str_to_arr(infix_to_postfix(add_space(str)));
	return (evaluate_postfix(arr));
}
