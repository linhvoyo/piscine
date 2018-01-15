/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 08:59:46 by lilam             #+#    #+#             */
/*   Updated: 2017/10/31 09:01:32 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		i++;
		d_length++;
	}
	dest[d_length] = '\0';
	return (dest);
}
