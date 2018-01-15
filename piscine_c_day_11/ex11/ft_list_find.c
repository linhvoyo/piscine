/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:56:56 by lilam             #+#    #+#             */
/*   Updated: 2017/11/08 18:50:37 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list)
	{
		while (begin_list)
		{
			if (!(cmp(begin_list->data, data_ref)))
				return (begin_list);
			begin_list = begin_list->next;
		}
	}
	return (0);
}
