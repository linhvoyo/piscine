/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 06:14:56 by lilam             #+#    #+#             */
/*   Updated: 2017/10/31 06:20:37 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int to_find_length;

	i = 0;
	to_find_length = 0;
	while (to_find[to_find_length])
		to_find_length++;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
			j++;
		if (j == to_find_length)
			return (str + i);
		i++;
	}
	return (0);
}
