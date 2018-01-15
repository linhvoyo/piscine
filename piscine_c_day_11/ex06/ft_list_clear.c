/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:54:43 by lilam             #+#    #+#             */
/*   Updated: 2017/11/08 12:00:24 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *temp;

	while (*begin_list)
	{
		temp = *begin_list;
		*begin_list = temp->next;
		free(temp);
	}
}
