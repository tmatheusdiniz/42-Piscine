/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:08:10 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/07 14:46:15 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
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
    char test2[10] = "HelloO";
    j = ft_strcmp(test, test2);
    printf("%d\n", strcmp(test, test2));
    printf("%d", j);
}
*/
