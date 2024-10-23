/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:26:50 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/20 21:29:10 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>

void    ft_display_files(int fd)
{
	char buffer;
	ssize_t byte_read;

	while ((byte_read = read(fd, &buffer, 1)))
	{
		write (1, &buffer, 1);
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

void    ft_cat(int a, char *names[])
{
    int i;
    int fd;
	char *error;

    i = 0;
    while (i < a)
    {
        fd = open(names[i], O_RDONLY);
		if (fd < 0)
		{
			error = strerror(errno);
			write(2, "ft_cat: ", 8);
			while (*(names[i]))
				write(2, (names[i])++, 1);
			write (2, ": ", 2);
			write(2, error, ft_strlen(error)); 
			write (2, "\n", 1);
		}
		else
			ft_display_files(fd);
		close(fd);
		i ++;
    }
}

int main(int a, char **str)
{
	if (a < 2)
		ft_display_files(0);
	else
    	ft_cat(a - 1, str +1);
}
