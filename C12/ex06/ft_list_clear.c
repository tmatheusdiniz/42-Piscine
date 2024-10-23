/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:30:24 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/12 14:11:20 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *current;
	t_list *next;
	
	current = begin_list;
	while (current != NULL)
	{
		next = current -> next;
		(*free_fct)(current -> data);
		free(current);
		current = next;
	}
}
/*
void	free_data(void *data)
{
	printf("data free: %d\n", *(int *)data);
}

void    print_list(t_list *list)
{
    t_list *current;

    current = list;
    while (current != NULL)
    {
        printf("current data: %d\n", *(int*)current -> data); // (int *) do the casting and * is used to dereference. 
        current = current -> next; // it is important to note that (current -> data) is a pointer. As if (current -> data = (void *)pointer_generic), making a parameterization. 
    }
}

t_list  *ft_create_elem(void *data)
{
    t_list  *new_elem;

    new_elem = (t_list *)(malloc(sizeof(t_list)));
    if (!new_elem)
        return (NULL);
    new_elem -> data = data;
    new_elem -> next = NULL;
    return (new_elem);
}

int	main(void)
{
	int a;
	int b;
	t_list	*list;

	a = 42;
	b = 43;
	list = ft_create_elem(&a);
	list -> next = ft_create_elem(&b);
	printf("current list: \n");
	print_list(list);
	ft_list_clear(list, &free_data);
}
*/