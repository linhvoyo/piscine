/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:24:01 by lilam             #+#    #+#             */
/*   Updated: 2017/11/08 15:52:45 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	if (begin_list)
	{
		while (i < nbr)
		{
			if (!(begin_list->next))
				return (0);
			begin_list = begin_list->next;
			i++;
		}
		return (begin_list);
	}
	return (0);
}
