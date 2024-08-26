/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 21:58:37 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/12 19:55:27 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	argc = 0;
	while (argv[argc][i])
	{
		write(1, &(argv[argc][i]), 1);
		i ++;
	}
	write(1, "\n", 1);
}
