/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 09:45:36 by lilam             #+#    #+#             */
/*   Updated: 2017/10/31 15:28:37 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int d_length;
	unsigned int i;
	unsigned int s_length;

	d_length = 0;
	while (dest[d_length])
		d_length++;
	s_length = 0;
	while (src[s_length])
		s_length++;
	i = 0;
	if (size > 0)
	{
		while ((src[i] != '\0') && ((d_length + i) < (size - 1)))
		{
			dest[d_length + i] = src[i];
			i++;
		}
		dest[d_length + i] = '\0';
	}
	if (d_length < size)
		return (s_length + d_length);
	else
		return (s_length + size);
}
