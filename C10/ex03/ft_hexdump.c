/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:24:22 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/21 18:47:03 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

int	ft_file_size(char *file_name)
{
	int size;
	int	file;
	char buffer;
	char	*error;

	file = open(file_name, O_RDONLY);
	size = 0;
	if (file < 0)
	{
		error = strerror(errno);
		write(2, "ft_tail: ", 9);
		while (*file_name)
			write(2, file_name++, 1);
		write (2, ": ", 2);
		write(2, error, strlen(error)); //I did use "strlen" here, but it is not allowed. 
		write (2, "\n", 1);
		return (-1);
	}
	else
		while (read(file, &buffer, 1) > 0)
			size ++;
	close (file);
	return (size);
}

void    ft_print_hex()
{
    
}

void    ft_print_offset()
{

}

void    ft_print_ascii()
{
    
}

int main(int c, char **v)
{
    int i;
	int size;
	
	i = 0;
	size = 0;
	if (v[1][0] == '-' && v[1][1] == 'C' && c >= 3)
	{
		i = 2;
		while (i < c)
		{
			size = ft_file_size(v[i]);			
			i ++;
		}
	}
	else
	{
		write(1, "Use the option -C to succeed", 29);
		return (0);
	}
}