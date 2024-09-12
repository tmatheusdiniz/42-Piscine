/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 22:46:47 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/19 23:02:35 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int i;
	int j;
	int z;

	i = 0;
	j = 0;
	z = 0;
	if (argc == 4)
	{
		while (argv[2][j])
			j ++;
		while (argv[3][z])
			z ++;
		if (j > 1 || z > 1)
		{
			write(1, "\n", 1);
			exit (0);
		}
		while(argv[1][i])
		{
			if (argv[2][0] == argv[1][i])
				argv[1][i] = argv[3][0];
			i ++;
		}
		i = 0;
		while (argv[1][i])
                	write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
}
		
