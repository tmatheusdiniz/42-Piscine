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

void	ft_print(void *item)
{
	printf("%s\n", (char *)item);
}

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

int	main(void)
{
	t_btree	level3_left_l = {NULL, NULL, "5"};
	t_btree	level3_left_r = {NULL, NULL, "6"};
	t_btree	level3_right_l = {NULL, NULL, "10"};
	t_btree	level3_right_r = {NULL, NULL, "12"};
	t_btree	level2_left = {&level3_left_l, &level3_left_r, "3"};
	t_btree	level2_right = {&level3_right_l, &level3_right_r, "4"};
	t_btree	level1 = {&level2_left, &level2_right, "10"};
	printf("result : %d\n", btree_level_count(&level1));
}
