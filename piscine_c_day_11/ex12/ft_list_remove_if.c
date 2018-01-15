/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:12:52 by lilam             #+#    #+#             */
/*   Updated: 2017/11/08 22:40:42 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *list;
	t_list *front;
	t_list *end;

	list = *begin_list;
	front = 0;
	end = 0;
	while (list)
	{
		if (!(cmp(list->data, data_ref)))
		{
			if (list == *begin_list)
				*begin_list = list->next;
			else
				front->next = list->next;
			end = list;
			list = list->next;
			free(end);
		}
		else
		{
			front = list;
			list = list->next;
		}
	}
}
