/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itp_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 18:29:06 by lilam             #+#    #+#             */
/*   Updated: 2017/11/12 19:00:06 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int		pemdas(char op)
{
	if (op == '-' || op == '+')
		return (1);
	if (op == '*' || op == '/' || op == '%')
		return (2);
	return (0);
}

int		do_op(int left, int right, char operator)
{
	if (operator == '+')
		return (left + right);
	else if (operator == '-')
		return (left - right);
	else if (operator == '*')
		return (left * right);
	else if (operator == '/')
		return (left / right);
	else if (operator == '%')
		return (left % right);
	else
		return (0);
}

int		cal_length(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (!DL(*str) && DL(*(str + 1)))
			i++;
		str++;
	}
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		length;
	char	**arr;

	arr = malloc(sizeof(arr) * (cal_length(str) + 1));
	i = 0;
	while (*str)
	{
		while (DL(*str) && *str)
			str++;
		if (*str == '\0')
			break ;
		length = 0;
		while (!DL(str[length]))
			length++;
		arr[i] = malloc(length + 1);
		j = 0;
		while (!DL(*str))
			arr[i][j++] = *str++;
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = (char*)'\0';
	return (arr);
}

int		ft_atoi(char *str)
{
	int i;
	int val;
	int sign;

	val = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i])
	{
		if ((str[i] >= 48 && str[i] <= 57))
			val = (val * 10) + str[i] - '0';
		else
			break ;
		i++;
	}
	if (sign == -1)
		val *= -1;
	return (val);
}
