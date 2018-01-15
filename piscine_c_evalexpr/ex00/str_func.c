/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 18:23:09 by lilam             #+#    #+#             */
/*   Updated: 2017/11/12 18:25:20 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = (nb % -1000000000) * -1;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = (nb * -1);
	}
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}

int		strlength(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (*str != ' ')
			i++;
		str++;
	}
	return (i);
}
