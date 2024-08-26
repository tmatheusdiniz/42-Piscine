/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 13:09:50 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/04 13:23:25 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = (x) / (y);
	*b = (x) % (y);
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d\n", a, b);
}
*/