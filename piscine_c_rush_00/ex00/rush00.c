/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slin <linsheng4522010@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 15:46:57 by slin              #+#    #+#             */
/*   Updated: 2017/10/29 19:32:49 by slin             ###   ########.fr       */
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
	if (x > 0)
	{
		while (i <= y)
		{
			if (i == 1)
				x_axis(x, 'o', '-', 'o');
			else if (i == y)
				x_axis(x, 'o', '-', 'o');
			else
				x_axis(x, '|', ' ', '|');
			i++;
		}
	}
}
