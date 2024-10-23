/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:04:56 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/12 14:27:44 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;
	t_list *current;

	i = 0;
	current = begin_list;
	while (current != NULL && i < nbr)
	{
		current = current -> next;
		 i ++;
	}
	if (i == nbr && current != NULL)
		return (current);
	else
		return (NULL);
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
	int c;
	t_list	*list;
	t_list *elem_n;

	a = 42;
	b = 43;
	c = 50;
	list = ft_create_elem(&a);
	list -> next = ft_create_elem(&b);
	list -> next -> next = ft_create_elem(&c);
	elem_n = ft_list_at(list, 2);
	printf ("data n-ésimo elem: %d\n", *(int *)elem_n -> data);
}
