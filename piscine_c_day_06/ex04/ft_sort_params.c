/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 11:39:22 by lilam             #+#    #+#             */
/*   Updated: 2017/11/01 22:16:06 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_program_name(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

void	ft_print_params(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_print_program_name(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	if (s1[0] == '\0')
		return (s1[0] - s2[0]);
	if (s2[0] == '\0')
		return (s1[0] - s2[0]);
	while (s1[x])
	{
		if (s1[x] != s2[x])
			break ;
		x++;
	}
	if (s1[x] > s2[x])
		return (s1[x] - s2[x]);
	if (s1[x] < s2[x])
		return (s1[x] - s2[x]);
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < (argc - i))
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	ft_print_params(argc, argv);
	return (0);
}
