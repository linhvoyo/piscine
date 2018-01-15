/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 18:25:36 by lilam             #+#    #+#             */
/*   Updated: 2017/11/12 18:49:36 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*create_stack(unsigned length)
{
	t_stack *stack;

	stack = (t_stack*)malloc(sizeof(stack));
	if (!stack)
		return (NULL);
	stack->top = -1;
	stack->length = length;
	stack->array = (int*)malloc(stack->length * sizeof(int));
	if (!stack->array)
		return (NULL);
	return (stack);
}

int		is_empty(t_stack *stack)
{
	return (stack->top == -1);
}

char	view(t_stack *stack)
{
	return (stack->array[stack->top]);
}

char	pop(t_stack *stack)
{
	if (!is_empty(stack))
		return (stack->array[stack->top--]);
	return ('$');
}

void	push(t_stack *stack, char op)
{
	stack->array[++stack->top] = op;
}
