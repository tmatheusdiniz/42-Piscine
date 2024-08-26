/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 13:24:36 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/04 14:11:57 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str ++;
	}
}

int	main(void)
{
	char	strin[5];

	strcpy(strin, "abc");
	ft_putstr(strin);
	return (0);
}
