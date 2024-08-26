/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   worldc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 23:13:24 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/22 23:16:35 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t');
}
int		ft_countwords(char *str)
{
	int count;
	int	i;
	int word;
	i = 0;
	count = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i]))
		{
			if (word)
			{
				word = 0;
			}
		}
		else
		{
			if (!word)
			{
				word = 1;
				count++;
			}
		}
		str++;
	}
	return (count);
}

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	if(argc == 2)
	{
		i = ft_countwords(argv[1]);
		printf("%d", i);
	}
	
}