/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 23:15:43 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/19 23:22:02 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **str)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (str[1][i])
		{
			if (str[1][i] >= 'a' && str[1][i] <= 'z')
			{
				if (str[1][i] == 'z')
					str[1][i] = 'a';
				else
				str[1][i] += 1;
			}
			else if (str[1][i] >= 'A' && str[1][i] <= 'Z')
			{
				if (str[1][i] == 'Z')
					str[1][i] = 'A';
				else
				str[1][i] += 1;
			}
			i ++;
		}
		i = 0;
		while (str[1][i])
			write(1, &str[1][i++], 1);
	
	}
	write(1, "\n", 1);
}
