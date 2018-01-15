/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 07:11:21 by lilam             #+#    #+#             */
/*   Updated: 2017/10/28 16:40:50 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	factorial(int num)
{
	if (num == 0)
		return (1);
	return (num * factorial(num - 1));
}

int	ft_recursive_factorial(int nb)
{
	if (nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	if (nb <= 0)
	{
		return (0);
	}
	else
	{
		return (factorial(nb));
	}
	return (factorial(nb));
}
