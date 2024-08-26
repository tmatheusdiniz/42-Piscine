/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:55:15 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/04 21:51:57 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	position;
	int	save;

	start = 0;
	position = 0;
	while (start < size - (size / 2))
	{
		save = tab[(size - 1) - position];
		tab[(size - 1) - position] = tab [position];
		tab[position] = save;
		position++;
		start++;
	}
	i = 0;
	start = 0;
	while (start < size)
	{
		printf("%d\n", tab[i]);
		i++;
		start++;
	}
}

/*int	main(void)
{
	int	x[] = {1, 2, 3, 4};
	int	size;

	size = 4;
	ft_rev_int_tab(x, size);
}
*/