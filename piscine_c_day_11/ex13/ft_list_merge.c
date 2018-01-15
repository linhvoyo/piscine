/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 22:14:16 by lilam             #+#    #+#             */
/*   Updated: 2017/11/08 22:27:56 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list;

	list = *begin_list1;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}
