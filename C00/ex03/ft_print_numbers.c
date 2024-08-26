/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:23:20 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/02 23:20:10 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	number;

	number = 48;
	while (number <= 57)
	{
		write(1, &number, 1);
		number += 1;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/