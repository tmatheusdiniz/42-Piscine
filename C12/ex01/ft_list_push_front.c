/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 23:13:35 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/11 17:38:19 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	ft_list_push_front(t_list **begin_list, void *data) 
{
    t_list *new_elem;
    
    if (*begin_list)
    {
        new_elem = ft_create_elem(data);
        new_elem -> next = *begin_list;
        *begin_list = new_elem;
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
    ft_list_push_front(&test, &d);
    printf("\n");
    printf("List after: \n");
    print_list(test);
}
*/