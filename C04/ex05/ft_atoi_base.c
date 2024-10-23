/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:06:10 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/03 14:54:03 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str);
int repeat_char(char *ptr);
int check_base(char *ptr);

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i ++;
    return (i);
}

int repeat_char(char *ptr)
{
    int i;
    int j;

    i = 0;
    while (ptr[i])
    {
        j = i + 1;
        while(ptr[j])
        {
            if (ptr[i] == ptr[j])
                return (1);
            j ++;
        }
        i ++;
    }
    return (0);
}

int check_base(char *ptr)
{
    if (ft_strlen(ptr) == 0 || ft_strlen(ptr) == 1)
        return (1);
    if (*ptr == '+' || *ptr == '-')
        return (1);
    if (*ptr == 32 || (*ptr>= 9 && *ptr <= 13))
        return (1);
    if (repeat_char(ptr))
        return (1);
    return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	aux;
	int	i;
	int	retur;

	i = 0;
	retur = 0;
	aux = 1;
    if (check_base(base))
    {
        return (0);
    }
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i ++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			aux *= -1;
		i ++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		retur = retur * ft_strlen(base) + (str[i] - '0');
		i ++;
	}
	return (retur * aux);
}
/*
#include <stdio.h>
int main(int a, char **str)
{
    if (a == 3)
    {
        printf("%d", ft_atoi_base(str[1], str[2]));
    }
    else
        printf("\n");
    return (0);
}
*/