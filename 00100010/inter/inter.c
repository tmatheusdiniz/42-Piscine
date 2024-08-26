/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:18:53 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/20 20:56:19 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **str)
{
	int i;
	int ascii[126];

	i = 0;
	if (argc == 3)
	{
		while (str[2][i])
		{
			ascii[(int)str[2][i]] = 1; 
			i ++;
		}
		i = 0;
		while (str[1][i])
		{
			if (ascii[(int)str[1][i]] == 1)
			{
				write(1, &str[1][i], 1);
				ascii[(int)str[1][i]] = 0;
			}
			i ++;
		}
	}
	write(1, "\n", 1);
}
