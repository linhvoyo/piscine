/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 14:06:05 by lilam             #+#    #+#             */
/*   Updated: 2017/11/03 15:01:28 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_THE_WORLD "poop smosher"

typedef	struct	s_perso
{
	char	*name;
	double	life;
	int		age;
	char	*profression;
}				t_perso;

#endif
