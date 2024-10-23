/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:39:10 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/11 18:14:12 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	int i;
	t_list *list;
	t_list *new_elem;

	i = 0;
	list = 0;
	if (size <= 0)
		return (0);
	while (i < size)
	{
		new_elem = ft_create_elem(strs[i]);
		new_elem -> next = list;
		list = new_elem;
		i ++;
	}
	return (list);
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

void    print_list(t_list *list)
{
    t_list *current;

    current = list;
    while (current != NULL)
    {
        printf("current data: %s\n", (char *)current -> data); // (int *) do the casting and * is used to dereference. 
        current = current -> next; // it is important to note that (current -> data) is a pointer. As if (current -> data = (void *)pointer_generic), making a parameterization. 
    }
}

int	main(int a, char **str)
{
	t_list *list;
	
	list = ft_list_push_strs(a - 1, str + 1);
	print_list(list);	
}