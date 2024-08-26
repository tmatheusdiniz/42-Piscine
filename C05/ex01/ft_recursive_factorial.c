/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:35:38 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/11 20:42:35 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = nb;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int	main(void)
{
    int i;
    int j;

    i = 3;
    j = ft_recursive_factorial(i);
    printf("%d", j);
}
*/
