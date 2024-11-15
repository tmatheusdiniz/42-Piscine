/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:06:49 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/15 13:22:51 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int count_l;
	int	count_r;

	count_l = 0;
	count_r = 0;
	if (!root)
		return (0);
	count_l = btree_level_count(root->left);
	count_r = btree_level_count(root->right);
	if (count_l > count_r)
		return (count_l + 1);
	else
		return (count_r + 1);
}
