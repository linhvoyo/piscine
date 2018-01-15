/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 06:10:34 by lilam             #+#    #+#             */
/*   Updated: 2017/11/03 06:12:23 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"
#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	while (**factory)
		free(**factory++);
	while (*factory)
		free(*factory++);
	while (factory)
		free(factory++);
}
