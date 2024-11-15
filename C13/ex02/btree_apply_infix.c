/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:23:57 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/14 20:01:56 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_print(void *item)
{
	printf("%s\n", (char *)item);
} 

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
		btree_apply_infix(root->left, applyf);
	applyf(root->item);
	if (root->right)
		btree_apply_infix(root->right, applyf);
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
	btree_apply_infix(&level1, &ft_print);
}
