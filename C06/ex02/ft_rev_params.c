/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 22:37:37 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/12 19:46:17 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argc > 1)
	{
		i = 0;
		while (argv[argc - 1][i])
		{
			write(1, &argv[argc - 1][i], 1);
			i ++;
		}
		write(1, "\n", 1);
		argc --;
	}
}
