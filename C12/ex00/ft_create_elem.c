/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:35:33 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/10 21:16:00 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

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
int main()
{
    int i;

    i = 42;
    t_list *list;

    list = ft_create_elem(&i);
    printf("Value of list-> data : %d\n", *(int *)(list -> data));
    printf("Value of elem->next: %p\n", (void *)list->next);

    free (list);
}
*/