/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 07:59:33 by lilam             #+#    #+#             */
/*   Updated: 2017/11/03 09:09:14 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	if (s1[0] == '\0')
		return (s1[0] - s2[0]);
	if (s2[0] == '\0')
		return (s1[0] - s2[0]);
	while (s1[x])
	{
		if (s1[x] != s2[x])
			break ;
		x++;
	}
	if (s1[x] > s2[x])
		return (s1[x] - s2[x]);
	if (s1[x] < s2[x])
		return (s1[x] - s2[x]);
	return (0);
}

char    *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int main (int argc, char **argv)
{
	int i ;

	i = 1;
	while (i < argc)
	{
		if (ft_strcmp(ft_strlowcase(argv[i]), "president") == 0 ||
				ft_strcmp(ft_strlowcase(argv[i]), "attack") == 0 ||
				ft_strcmp(ft_strlowcase(argv[i]), "bauer") == 0)
			write(1, "Alert!!!\n", 9);
		i++;
	}
	return(0);
}
