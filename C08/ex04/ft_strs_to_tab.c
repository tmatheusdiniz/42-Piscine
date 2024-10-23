/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:57:35 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/12 17:41:45 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		count ++;
		str ++;
	}
	return (count);
}

char	*ft_strdup (char *str)
{
	int i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!ptr)
		return (NULL);
	while (str[i])
	{
		ptr[i] = str[i];
		i ++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int i;
	int j;
	struct s_stock_str *ptr;

	i = 0;
	j = 0;
	ptr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!ptr)
		return (NULL);	
	while (i < ac)
	{
		if (av[i] == NULL)
		{
			free (ptr);
			return (NULL);
		}
		ptr[i].size = ft_strlen(av[i]);
		ptr[i].str = ft_strdup(av[i]);
		ptr[i].copy = ft_strdup(av[i]);
		if (!(ptr[i].str || ptr[i].copy))
			free (ptr);
		i ++;
	}
	ptr[i].str = 0;
	return (ptr);
}
/*
void	print_structs(struct s_stock_str *ptr)
{
	int i;

	i = 0;
	while (ptr[i].str)
	{
		printf("current str: %s\n", ptr[i].str);
		printf("current copy : %s\n", ptr[i].copy);
		printf("size : %d\n", ptr[i].size);
		printf("---------------------------\n");
		i ++;		
	}
	free (ptr);
}

int	main(int a, char **str)
{
	t_stock_str *ptr;
	ptr = ft_strs_to_tab(a - 1, str + 1);
	print_structs(ptr);
}
*/