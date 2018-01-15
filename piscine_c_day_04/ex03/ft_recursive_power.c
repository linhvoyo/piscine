/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 09:14:14 by lilam             #+#    #+#             */
/*   Updated: 2017/10/28 16:50:59 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int count;

	if (power < 0)
		return (0);
	if (power > 0)
	{
		count = nb * ft_recursive_power(nb, power - 1);
		return (count);
	}
	else
	{
		return (1);
	}
}
