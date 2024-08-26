/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:37:14 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/02 23:19:09 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	key;

	if (n <= 0)
	{
		key = 'N';
		write(1, &key, 1);
	}
	else
	{
		key = 'P';
		write(1, &key, 1);
	}
}

/*int	main(void)
{
	ft_is_negative(42);
	return (0);
}
*/