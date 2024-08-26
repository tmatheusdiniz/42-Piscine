/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:31:40 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/08 00:13:20 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i == n)
		return (0);
	if (s1[i] != '\0')
	{
		return (s1[i] - s2[i]);
	}
	if (s2[i] != '\0')
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int    main(void)
{
    int j;
    char test[10] = "HelloA";
    char test2[10] = "HelloW";
    int	tam = 10;
    j = ft_strncmp(test, test2, tam);
    printf("%d original\n", strncmp(test, test2, tam));
    printf("%d fake", j);
}
*/