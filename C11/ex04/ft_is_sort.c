/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 23:51:47 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/10 00:16:46 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int j;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i ++;
	}
	return (1);
}

int compare(int i, int j)
{
	return (i - j);
}
/*
#include <stdio.h>
int	main(void)
{
	int x[] = {1, 2, 3, 5};
	int y[] = {2, 3, 1, 5, 6};
	printf("%d\n", ft_is_sort(x, 4, &compare));
	printf("%d\n", ft_is_sort(y, 5, &compare));
}
*/