/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:41:09 by mreinald   #+#    #+#             */
/*   Updated: 2024/11/15 12:15:12 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_print(void *item)
{
		printf("%s\n", (char *)item);
} 

int ft_strcmp(void *s1, void *s2)
{
	int n1 = atoi((char *)s1);
	int n2 = atoi((char *)s2);
	return (n1 - n2);
}

void	*btree_search_item(t_btree *root, void *data_ref, int(*cmpf)(void *, void *))
{
	if (!root || !data_ref || !cmpf)
		return (NULL);
	void *left_result = btree_search_item(root->left, data_ref, cmpf);
	if (left_result)
		return left_result;
	int cmp = cmpf(root->item, data_ref);
	if (cmp == 0)
		return root->item;
	void *right_result = btree_search_item(root->right, data_ref, cmpf);
	if (right_result)
		return (right_result);
	return (NULL);
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
	printf("result : \n");
	ft_print(btree_search_item(&level1, "3", ft_strcmp));
}
