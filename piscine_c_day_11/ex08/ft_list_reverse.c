/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:10:19 by lilam             #+#    #+#             */
/*   Updated: 2017/11/08 17:14:38 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *i;
	t_list *j;
	t_list *k;

	i = *begin_list;
	j = 0;
	k = 0;
	if (*begin_list)
	{
		while (i)
		{
			k = j;
			j = i;
			i = i->next;
			j->next = k;
		}
		*begin_list = j;
	}
}
