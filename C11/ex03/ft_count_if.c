/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 23:18:44 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/09 23:48:04 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]))
			count ++;
		i ++;
	}
	return (count);
}
/*
int	is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		i ++;
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int i;
	int length;
	char *matrix[] = {"Hello10", "Worl4d", NULL};

	i = 0;
	length = 0;
	while (matrix[i])
	{
		length ++;
		i ++;
	}
	printf("count: %d\n", ft_count_if(matrix, length, &is_numeric));
}
*/