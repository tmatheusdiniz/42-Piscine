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

void	ft_print(void *item)
{
	printf("%s\n", (char *)item);
} 

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

int	main(void)
{
	t_btree	level3_left_l = {NULL, NULL, "3.1"};
	t_btree	level3_left_r = {NULL, NULL, "3.2"};
	t_btree	level3_right_l = {NULL, NULL, "3.3"};
	t_btree	level3_right_r = {NULL, NULL, "3.4"};
	t_btree	level2_left = {&level3_left_l, &level3_left_r, "2.1"};
	t_btree	level2_right = {&level3_right_l, &level3_right_r, "2.2"};
	t_btree	level1 = {&level2_left, &level2_right, "1"};
	printf("b_tree after : \n");
}
