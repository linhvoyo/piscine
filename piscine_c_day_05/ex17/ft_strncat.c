/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 09:06:44 by lilam             #+#    #+#             */
/*   Updated: 2017/10/31 09:44:34 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int d_length;
	int i;

	d_length = 0;
	while (dest[d_length])
		d_length++;
	i = 0;
	while (i < nb)
	{
		dest[d_length] = src[i];
		i++;
		d_length++;
	}
	dest[d_length] = '\0';
	return (dest);
}
