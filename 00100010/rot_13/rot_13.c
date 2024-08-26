/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:47:42 by mreinald          #+#    #+#             */
/*   Updated: 2024/08/22 14:21:19 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alpha(char s1)
{
	return ((s1 >= 'a' && s1 <= 'z') || (s1 >= 'A' && s1 <= 'Z'));
}

int	main(int v, char **str)
{
	int i;

	i = 0;
	if (v == 2)
	{
		while (str[1][i])
		{
			if (is_alpha(str[1][i]) && (str[1][i] >= 'a' && str[1][i] <= 'm') )
			{
					str[1][i] += 13;
			}
			else if(is_alpha(str[1][i]) && (str[1][i] >= 'n' && str[1][i] <= 'z'))
			{
				if (str[1][i] == 'z')
                                   	str[1][i] = 'm';
				else
					str[1][i] -= 13;
			}
			else if(is_alpha(str[1][i]) && str[1][i] <= 'M')
			{
                                        str[1][i] += 13;
			}
			else if(is_alpha(str[1][i]) && str[1][i] <= 'Z')
			{
                        	if (str[1][i] == 'Z')
					str[1][i] = 'M';
				else	
					str[1][i] -= 13;
			}

			i ++;
		}
		i = 0;
		while (str[1][i])
			write(1 , &str[1][i++], 1);
	}
	write(1, "\n", 1);
}
