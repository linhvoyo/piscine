/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 21:25:17 by lilam             #+#    #+#             */
/*   Updated: 2017/11/06 22:20:14 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		cal_length(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
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

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	char	*temp;
	int		length;

	length = cal_length(tab);
	i = 0;
	while (i < length)
	{
		j = 0;
		while (j < (length - 1))
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
