/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 07:11:21 by lilam             #+#    #+#             */
/*   Updated: 2017/10/28 16:22:59 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int count;

	if (nb > 12)
		return (0);
	if (nb < 0)
		return (0);
	count = 1;
	while (nb >= 1)
	{
		count = count * nb;
		nb--;
	}
	return (count);
}
