/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:02:58 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/04 21:51:52 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	save;

	start = 0;
	end = 0;
	while (start < (size - 1))
	{
		end = 0;
		while (end < (size - 1))
		{
			if (tab[end] > tab[(end + 1)])
			{
				save = tab[end];
				tab[end] = tab[end + 1];
				tab[end + 1] = save;
				end ++;
			}
			else
			{
				end ++;
			}
		}
		start ++;
	}
}

/*int	main(void)
{
	int	x[] = {1, 10, 4, 3, 15, 16, 17, 18};
	int	size;

	size = 8;
	ft_sort_int_tab(x, size);

	for (int i = 0; i < size; i ++)
	{
		printf("%d\n", x[i]);
	}
}
*/