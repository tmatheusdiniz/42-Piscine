/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:26:28 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/01 19:00:29 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 97;
	while (letter <= 122)
	{
		write(1, &letter, 1);
		letter += 1;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/