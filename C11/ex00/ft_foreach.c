/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:02:34 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/09 21:43:01 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(*(tab + i));
		i ++;
	}
}
/*
#include <stdio.h>
void	modified(int number)
{
	printf("modified's numbers: %d\n", number + 3);
}

void	main(void)
{
	int numbers[10];
	int i = 0;
	while (i < 10)
	{
		numbers[i] = i;
		i ++;
	}
	i = 0;
	while (i < 10)
	{
		printf("Current numbers: %d\n", numbers[i]);
		i ++;
	}
	printf("-------------------------------\n");
	ft_foreach(numbers, 10, &modified);
}
*/