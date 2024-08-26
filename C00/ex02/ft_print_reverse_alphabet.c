/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:19:45 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/01 18:59:54 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 122;
	while (letter >= 97)
	{
		write(1, &letter, 1);
		letter -= 1;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/