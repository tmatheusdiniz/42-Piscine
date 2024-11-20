/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_invert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:03:24 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/20 18:24:29 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_invert(t_btree *root)
{
	t_btree	*temp;
	if (!root)
		return ;
	if (root -> left || root -> right)
	{
		btree_invert(root->left);
		btree_invert(root->right);
		temp = root -> left;
		root->left = root->right;
		root->right = temp;
	}
	else
		return ;
}
