/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:08:50 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/11 15:16:03 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

#include <stdlib.h>

typedef struct s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;

#endif
