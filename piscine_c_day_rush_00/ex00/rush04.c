/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 12:09:50 by lilam             #+#    #+#             */
/*   Updated: 2017/10/29 12:45:02 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	x_axis(int x, char start, char mid, char end)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(start);
		else if (i == x)
			ft_putchar(end);
		else
			ft_putchar(mid);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			x_axis(x, 'A', 'B', 'C');
		else if (i == y)
			x_axis(x, 'C', 'B', 'A');
		else
			x_axis(x, 'B', ' ', 'B');
		i++;
	}
}
