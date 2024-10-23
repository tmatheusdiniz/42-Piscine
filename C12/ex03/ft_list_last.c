/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:56:27 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/11 17:13:05 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list  *ft_list_last(t_list *begin_list)
{
    int	count;
    t_list *current;

    current = begin_list;
    while (current -> next)
        current = current -> next; 
	return (current);
}
/*
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
	int i;
	int a;
	int b;
    int c;
	t_list	*elem;
    t_list  *last;

    a = 42;
    b = 43;
    c = 34;
	elem = ft_create_elem(&a);
	elem -> next = ft_create_elem(&b);
    elem -> next -> next = ft_create_elem(&c);
    last = ft_list_last(elem);
	printf("data : %d\n", *(int *)last -> data);
    printf("next : %p\n", (void *)last ->next);
}
*/