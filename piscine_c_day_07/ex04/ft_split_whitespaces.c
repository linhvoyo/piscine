/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 18:14:01 by lilam             #+#    #+#             */
/*   Updated: 2017/11/02 18:45:03 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		cal_length(char *str)
{
	int i;
	int delimiter;

	i = 0;
	delimiter = 0;
	while (str[i])
	{
		if (i == 0 && !(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			delimiter++;
		else if (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t')
				delimiter++;
		}
		i++;
	}
	return (delimiter);
}

char	*ft_print_word(int start, char *str)
{
	int		j;
	char	*temp;
	int		i;

	j = start;
	while (!(str[j] == ' ' || str[j] == '\n' || str[j] == '\t'))
	{
		j++;
	}
	temp = malloc(sizeof(char) * (j + 1));
	i = 0;
	while (start < j)
	{
		temp[i] = str[start];
		start++;
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

char	**ft_split_whitespaces(char *str)
{
	char	**new_str;
	int		i;
	int		delimiter;

	new_str = malloc(sizeof(char *) * (cal_length(str) + 1));
	i = -1;
	delimiter = 0;
	while (str[++i])
	{
		if (i == 0 && !(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		{
			new_str[delimiter] = ft_print_word((i), str);
			delimiter++;
		}
		else if (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t')
			{
				new_str[delimiter] = ft_print_word((i), str);
				delimiter++;
			}
		}
	}
	new_str[delimiter] = (char *)0;
	return (new_str);
}
