/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:13:41 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/11 17:38:28 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *current;
    if (*begin_list)
    {
		current = *begin_list;
		while (current -> next)
			current = current -> next;
		current -> next = ft_create_elem(data);
	}
    else
        *begin_list = ft_create_elem(data);
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
/*
void    print_list(t_list *list)
{
    t_list *current;

    current = list;
    while (current != NULL)
    {
        printf("current data: %d\n", *(int *)current -> data); // (int *) do the casting and * is used to dereference. 
        current = current -> next; // it is important to note that (current -> data) is a pointer. As if (current -> data = (void *)pointer_generic), making a parameterization. 
    }
}

int	main(void)
{
    t_list *test;
    test = (t_list *)malloc(sizeof(t_list));
    if (!test)
        return (1);
	int a;
    int b;
    int c;
    int d;

    srand(time(NULL));
	a = 42;
    b = 25;
    c = 26;
    d = rand() % 43;
    test = ft_create_elem(&a);
    test -> next = ft_create_elem(&b);
    test -> next -> next = ft_create_elem(&c);
    printf("List before: \n");
    print_list(test);
    ft_list_push_back(&test, &d);
    printf("\n");
    printf("List after: \n");
    print_list(test);
}
*/
