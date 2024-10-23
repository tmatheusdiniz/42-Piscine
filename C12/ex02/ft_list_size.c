/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:48:46 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/11 14:09:02 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	int	count;
    t_list *current;

    current = begin_list;
    while (current != NULL)
    {
        count ++; 
        current = current -> next; 
    }
	return (count);
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
	t_list	*elem;

    a = 42;
    b = 43;
	elem = ft_create_elem(&a);
	elem -> next = ft_create_elem(&b);
	printf("element's number : %d\n", ft_list_size(elem));
}
*/