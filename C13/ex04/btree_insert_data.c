/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:47:02 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/14 23:21:40 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_print(void *item)
{
		printf("%s ", (char *)item);
}

int ft_strcmp(void *s1, void *s2)
{
	int n1 = atoi((char *)s1);
	int n2 = atoi((char *)s2);
	return (n1 - n2);
}

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree	*node;
	if (!root || !item || !cmpf)
		return;
	node = *root;
	if (!*root)
	{
		*root = btree_create_node(item);
		return;
	}
	int comparison = (*cmpf)(item, (*root)->item);
	printf("\n-------------------------\n");
	printf("\n comparison: %d\n", comparison);
	printf("\n-------------------------\n");
	if (comparison < 0)
	{
		if (node->left)
			btree_insert_data(&node->left, item, cmpf);
		else
		 	node->left = btree_create_node(item);
	}
	else 
	{
		if (node->right)
			btree_insert_data(&node->right, item, cmpf);
		else
			node->right = btree_create_node(item);
	}
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
	printf("btree before : \n");
	btree_apply_prefix(&level1, &ft_print);
	t_btree	*aux;
	aux = &level1;
	btree_insert_data(&aux, "7", &ft_strcmp);
	printf("\nbtree after: \n");
	btree_apply_prefix(&level1, &ft_print);
	btree_insert_data(&aux, "15", ft_strcmp);
	printf("\nbtree after-after: \n");
	btree_apply_prefix(&level1, &ft_print);
}
