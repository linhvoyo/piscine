/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:12:07 by lilam             #+#    #+#             */
/*   Updated: 2017/11/08 09:24:24 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;

	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		list = ft_create_elem(data);
		list->next = *begin_list;
		*begin_list = list;
	}
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;

	list = 0;
	i = 0;
	while (++i < ac)
		ft_list_push_front(&list, av[i]);
	return (list);
}
