/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 21:48:53 by lilam             #+#    #+#             */
/*   Updated: 2017/11/01 23:22:19 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*strcpy;

	length = 0;
	while (src[length])
		length++;
	strcpy = malloc(length + 1);
	if (strcpy != NULL)
	{
		i = 0;
		while (src[i])
		{
			strcpy[i] = src[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}
