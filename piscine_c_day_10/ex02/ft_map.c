/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:53:41 by lilam             #+#    #+#             */
/*   Updated: 2017/11/06 13:57:12 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *arr;

	i = -1;
	arr = malloc(sizeof(*arr) * (length));
	while (++i < length)
		arr[i] = f(tab[i]);
	return (arr);
}
