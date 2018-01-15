/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 18:41:25 by lilam             #+#    #+#             */
/*   Updated: 2017/10/28 18:43:51 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	if (nb > 46340 * 46340)
		return (0);
	i = 0;
	while (i * i < nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int i;

	i = ft_sqrt(nb);
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i >= 2)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb > 2147483647)
		return (0);
	while (1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
