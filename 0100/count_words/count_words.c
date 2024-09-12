/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 22:59:10 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/04 13:32:59 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t');
}
int		ft_count_words(char *str)
{
	int count;
	int	i;
	int aux;
	i = 0;
	count = 0;
	aux = 0;
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i]))
		{
			if (aux)
			{
				aux = 0;
			}
		}
		else
		{
			if (!aux)
			{
				aux = 1;
				count++;
			}
		}
		i++;
	}
	return (count);
}

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	if(argc == 2)
	{
		i = ft_count_words(argv[1]);
		printf("%d", i);
	}
	
}