/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 08:02:22 by lilam             #+#    #+#             */
/*   Updated: 2017/11/02 09:14:48 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int d_length;
	int i;

	d_length = 0;
	while (dest[d_length])
		d_length++;
	i = 0;
	while (src[i])
	{
		dest[d_length] = src[i];
		d_length++;
		i++;
	}
	dest[d_length] = '\n';
	dest[d_length + 1] = '\0';
	return (dest);
}

int		cal_length(int argc, char **argv)
{
	int i;
	int length;
	int j;

	length = 0;
	i = 1;
	while (i < argc)
	{
		if (argv[i] != NULL)
		{
			j = 0;
			while (argv[i][j])
			{
				length++;
				j++;
			}
		}
		i++;
	}
	return (length);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		length;
	char	*str;

	length = cal_length(argc, argv);
	str = malloc(sizeof(char) * (length + 1));
	i = 1;
	while (i < argc)
	{
		str = ft_strcat(str, argv[i]);
		i++;
	}
	str[length + (argc - 2)] = '\0';
	return (str);
}
