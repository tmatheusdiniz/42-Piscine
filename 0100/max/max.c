/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:36:35 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/20 20:07:32 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	max(int *tab, unsigned int len)
{
	unsigned int i;
	int save;

	i = 1;
	if (len == 0)
		return (0);
	save = tab[0];
	while (i < len)
	{
		if (tab[i] > save)
		{
			save = 	tab[i];
		}
		i ++;
	}
	return (save);
}
/*
int	main(void)
{
	int *ptr;
	int i;
	int j;

	i = 0;
	j = 1;
	ptr = malloc(20 * sizeof(int));
	if (ptr == NULL)
		return (0);
	while (i < 20)
	{
		ptr[i++] = j ++;
	}
	j = max(ptr, i);
	printf("%d\n", j);
	free(ptr);
}
*/
