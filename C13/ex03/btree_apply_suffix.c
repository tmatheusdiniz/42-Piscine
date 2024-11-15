/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 20:12:47 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/14 20:16:21 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_print(void *item)
{
		printf("%s\n", (char *)item);
} 

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
		btree_apply_suffix(root->left, applyf);
	if (root->right)
		btree_apply_suffix(root->right, applyf);
	applyf(root ->item);
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
	btree_apply_suffix(&level1, &ft_print);
}
