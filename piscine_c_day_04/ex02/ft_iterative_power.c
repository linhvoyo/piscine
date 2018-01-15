/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 08:20:05 by lilam             #+#    #+#             */
/*   Updated: 2017/10/28 16:45:19 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int count;

	if (power < 0)
		return (0);
	count = 1;
	i = 0;
	while (i < power)
	{
		count = count * nb;
		i++;
	}
	return (count);
}
