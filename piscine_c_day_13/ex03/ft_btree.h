/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:32:54 by lilam             #+#    #+#             */
/*   Updated: 2017/11/09 23:42:52 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef	struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;
t_btree				*btree_create_node(void *item);
#endif
