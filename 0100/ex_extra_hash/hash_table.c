/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_table.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 23:30:19 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/21 00:16:56 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <string.h>
#include <stdio.h>

# define HASH_SIZE 100

typedef struct	Node
{
	char	*key;
	char	*value;
	struct Node	*next;
}		node;

typedef struct	Hash
{
	struct Node	*list[HASH_SIZE];
}		hash;

unsigned int	create_hash(char *key)
{
	unsigned long	hash = 5381;
	while (*key)
	{
		hash = ((hash << 5) + hash) + *key++;
	}
	return hash % HASH_SIZE;
}

node	*create_node(char *key, char *value)
{
	node	*new_node;

	new_node = (node *)malloc(sizeof(node));
	if (!new_node)
	{
		perror("Failed to allocate node");
		exit(EXIT_FAILURE);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	return (new_node);
}
void	insert_node(hash	*elem, char	*key, char	*value)
{
	unsigned int	index;
	node	*insert;

	index = create_hash(key);
	insert = elem->list[index];
	if (!insert)
		elem->list[index] = create_node(key, value);
	else
	{
		while (insert->next)
			insert = insert->next;
		insert->next = create_node(key, value);
	}
}

char	*search_item(hash *elem, char *key)
{
	unsigned int	index;
	node	*n;

	index = create_hash(key);
	n = elem->list[index];
	while(n)
	{
		if (!(ft_strcmp(n->key, key)))
			return n->value;
		n = n->next;
	}
	return ("this element don´t exist!");
}

void show_menu() 
{
	printf("==================================\n");
	printf("         mini interactive screen.      \n");
	printf("==================================\n");
	printf("1. Insert element\n");
	printf("2. Search element\n");
	printf("3. Exit\n");
	printf("==================================\n");
	printf("Choose a number: ");
}

void clear_screen() 
{
	printf("\033[H\033[J");
}

void free_table(hash *table) 
{
	for (int i = 0; i < HASH_SIZE; i++) 
	{
		node *n = table->list[i];
		while (n) 
		{
			node *temp = n;
			n = n->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(table);
}

int	main(void)
{
	int 	choice;
	char	id[10];
	char	name[50];
	char	*value;
	char	input[10];

	hash	*elem = (hash *)malloc(sizeof(hash));
	if (!elem) {
		perror("Failed to allocate hash table");
		return EXIT_FAILURE;
	}
	ft_bzero(elem->list, sizeof(elem->list));
	choice = 0;
	while (choice != 3)
	{
		clear_screen();
		show_menu();
		fgets(input, sizeof(input), stdin);
		choice = atoi(input);
		switch (choice)
		{
			case 1:
				printf("type the id for the element: ");
				fgets(id, sizeof(id), stdin);
				id[strcspn(id, "\n")] = 0;
				printf("Type the name for the element: ");
				fgets(name, sizeof(name), stdin);
				name[strcspn(name, "\n")] = 0;
				insert_node(elem, id, name);
				printf("Element sucessfully inserted!");
				break;
			case 2 :
				printf("Type the id: ");
				fgets(id, sizeof(id), stdin);
				id[strcspn(id, "\n")] = 0;
				value = search_item(elem, id);
				printf("The element name : %s\n", value);
				printf("\nPress ENTER to continue...");
				getchar();
				break;
			case 3:
				printf("exiting...");
				break;
			default:
				printf("Invalid choice. Try again.\n");
		}
	}
	free(elem);
}
