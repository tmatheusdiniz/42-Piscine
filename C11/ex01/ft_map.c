/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:16:02 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/09 21:45:06 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int i;
    int *modifieds;

	i = 0;
    modifieds = malloc(sizeof(int) * (length));
	while (i < length)
    {
		modifieds[i] = f(*(tab + i));
		i ++;
	}
    return (modifieds);
}

#include <stdio.h>
int modified(int number)
{
	number *= number; 
    return (number);
}
/*
int main(void)
{
    int *modifieds;
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
	modifieds = ft_map(numbers, 10, &modified);
    i = 0;
    while (i < 10)
    {
        printf("modifieds: %d\n", modifieds[i]);
        i ++;
    }
    free(modifieds);
}
*/