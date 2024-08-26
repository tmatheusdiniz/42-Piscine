/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 23:16:06 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/14 13:22:45 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i ++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(char **arg, int argc)
{
	int		i;
	int		j;
	char	*save;

	i = 1;
	j = 1;
	while (j < argc)
	{
		i = 1;
		while (i < argc)
		{
			if (arg[i + 1] && ft_strcmp(arg[i], arg[i + 1]) > 0)
			{
				save = arg[i];
				arg[i] = arg[i + 1];
				arg[i + 1] = save;
			}
			i ++;
		}
		j ++;
	}
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	ft_sort_params(argv, argc);
	while (argv[x])
	{
		y = 0;
		while (argv[x][y])
		{
			write(1, &argv[x][y], 1);
			y ++;
		}
		write(1, "\n", 1);
		x ++;
	}
}
