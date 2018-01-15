/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 14:10:18 by lilam             #+#    #+#             */
/*   Updated: 2017/10/27 14:41:03 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		length;
	int		j;
	int		i;
	char	temp;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	i = 0;
	j = length - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}
