/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:14:51 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/11 20:40:06 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	j;
	int	factorial;

	factorial = nb;
	j = 1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb < 0)
		return (0);
	while (j < nb)
	{
		factorial *= j;
		j ++;
	}
	return (factorial);
}
/*
#include <stdio.h>
int	main(void)
{
    int i;
    long int j;

    i = 13;
    j = ft_iterative_factorial(i);
    printf("%ld", j);
}
*/