/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 07:53:22 by lilam             #+#    #+#             */
/*   Updated: 2017/11/08 08:35:14 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *list;

	if (begin_list)
	{
		while (begin_list)
		{
			list = begin_list;
			begin_list = begin_list->next;
		}
		return (list);
	}
	return (begin_list);
}
