/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:58:46 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/07 14:58:51 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*str == '\0' && *to_find == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j ++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i ++;
	}
	return (0);
}
/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
    char    test[20] = "Matheus Diniz";
    char    test2[10] = "Diniz";
    char    *aux; 
    aux = ft_strstr(test, test2);
    
    write(1, aux, 5);
    
}
*/
