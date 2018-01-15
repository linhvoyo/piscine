/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 06:17:31 by lilam             #+#    #+#             */
/*   Updated: 2017/10/26 06:57:40 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 48 - 1;
	while (++i <= 57)
	{
		j = i;
		while (++j <= 57)
		{
			k = j;
			while (++k <= 57)
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (i != 55)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
