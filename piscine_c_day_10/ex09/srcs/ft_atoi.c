/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 15:50:36 by lilam             #+#    #+#             */
/*   Updated: 2017/10/30 15:59:52 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_space(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else if (str[i] == '\n')
			i++;
		else if (str[i] == '\v')
			i++;
		else if (str[i] == '\r')
			i++;
		else if (str[i] == '\f')
			i++;
		else if (str[i] == '\t')
			i++;
		else
			return (i);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int i;
	int val;
	int sign;

	val = 0;
	sign = 1;
	i = check_space(str);
	if (str[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i])
	{
		if ((str[i] >= 48 && str[i] <= 57))
			val = (val * 10) + str[i] - '0';
		else
			break ;
		i++;
	}
	if (sign == -1)
		val *= -1;
	return (val);
}
