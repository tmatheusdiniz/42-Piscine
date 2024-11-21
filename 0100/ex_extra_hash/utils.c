/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 01:57:38 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/21 01:58:48 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_btree.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n -- > 0)
	*p ++ = '\0';
}

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i ++;
	return (s1[i] - s2[i]); 
}
