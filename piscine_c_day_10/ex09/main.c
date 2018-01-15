/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:19:05 by lilam             #+#    #+#             */
/*   Updated: 2017/11/07 11:57:47 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		ft_strlen(char *str);

void	div(char **argv)
{
	if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(ft_atoi(argv[1]) / ft_atoi(argv[3]));
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+' && ft_strlen(argv[2]) == 1)
			ft_putnbr(ft_atoi(argv[1]) + ft_atoi(argv[3]));
		else if (argv[2][0] == '-' && ft_strlen(argv[2]) == 1)
			ft_putnbr(ft_atoi(argv[1]) - ft_atoi(argv[3]));
		else if (argv[2][0] == '*' && ft_strlen(argv[2]) == 1)
			ft_putnbr(ft_atoi(argv[1]) * ft_atoi(argv[3]));
		else if (argv[2][0] == '/' && ft_strlen(argv[2]) == 1)
			div(argv);
		else if (argv[2][0] == '%' && ft_strlen(argv[2]) == 1)
		{
			if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
				ft_putstr("Stop : modulo by zero");
			else
				ft_putnbr(ft_atoi(argv[1]) % ft_atoi(argv[3]));
		}
		else
			ft_putstr("0");
		ft_putstr("\n");
	}
	return (0);
}
