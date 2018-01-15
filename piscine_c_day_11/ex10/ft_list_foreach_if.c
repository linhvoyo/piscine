/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:36:27 by lilam             #+#    #+#             */
/*   Updated: 2017/11/08 17:56:23 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	if (begin_list)
	{
		while (begin_list)
		{
			if (!cmp(begin_list->data, data_ref))
				f(begin_list->data);
			begin_list = begin_list->next;
		}
	}
}
