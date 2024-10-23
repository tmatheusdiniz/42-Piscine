/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:29:02 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/10 19:30:09 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i ++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int i;
	int j;
	char *save;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				save = tab[i];
				tab[i] = tab[j];
				tab[j] = save;
			}
			j ++;
		}
		i ++;
	}
}
/*
#include <stdio.h>
int	main(int a, char **str)
{
	int i;

	i = 1;
	ft_sort_string_tab(str);
	while (i < a)
	{
		printf("%s", str[i]);
		printf("\n");
		i ++;
	}
}
*/