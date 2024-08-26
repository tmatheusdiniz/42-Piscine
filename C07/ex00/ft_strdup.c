/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:27:13 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/12 22:37:15 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dpc;
	int		j;
	int		len;

	len = 0;
	while (src[len])
	{
		len ++;
	}
	dpc = malloc(len + 1);
	if (!dpc)
		return (0);
	j = 0;
	while (src[j])
	{
		dpc[j] = src[j];
		j ++;
	}
	dpc[j] = '\0';
	return (dpc);
}
/*
#include <unistd.h>
int	main(int argc, char **argv)
{
	char	*ptr;
	char	*org; 

	if (argc == 2)
	{
		ptr = ft_strdup(argv[1]);
	}
	if (ptr)
	{
		org = ptr;
		while (*ptr)
		{
			write(1, ptr, 1);
			ptr ++;
		}
	free (org);
	}
	return (0);
}
*/