/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 23:22:58 by lilam             #+#    #+#             */
/*   Updated: 2017/11/02 21:07:59 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *arr;
	int size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return (size);
}
