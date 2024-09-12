/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:44:11 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/21 19:51:17 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int a, char **str)
{
	int i;
	int ascii[128];

	i = 0;
	if (a == 3)
	{
		while(str[1][i])
			ascii[(int)str[1][i++]] = 1;
		i = 0;
		while (str[2][i])
			ascii[(int)str[2][i++]] = 1;
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
		i = 0;
		while (str[2][i])
                {
                        if (ascii[(int)str[2][i]] == 1)
                        {
                                write(1, &str[2][i], 1);
                                ascii[(int)str[2][i]] = 0;
                        }
                        i ++;
                }
	}
	write(1, "\n", 1);
}


