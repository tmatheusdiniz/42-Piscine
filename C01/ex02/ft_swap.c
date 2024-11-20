/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:15:34 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/04 12:58:30 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*
this is an alternative way that to resolve this problem!
I did use "XOR" for three times, and it's give me a "bit a bit" exchange.
*/
void	ft_swap(int *a, int *b)
{
	*a = (*a)^(*b);
	*b = (*a)^(*b);
	*a = (*a)^(*b);
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 15;
	printf("before : %d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("after : %d, %d\n", a, b);
}
*/
