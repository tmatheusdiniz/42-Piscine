/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:15:04 by mreinald          #+#    #+#             */
/*   Updated: 2024/09/16 20:52:39 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *file)
{
	int	fd;
	ssize_t byte_read;
	char	buffer[100];
	
	fd = open(file, O_RDONLY);
	if (fd == -1)
		write(1, "Cannot read file.", 17);
	while ((byte_read = read(fd, buffer, sizeof(buffer))) > 0)
	{
		write(1, buffer, byte_read);
	}
	close (fd);
}

int	main(int a, char **str)
{
	if (a == 1)
	{
		write(1, "File name missing.", 18);
	}
	else if (a > 2)
	{
		write(1, "Too many arguments.", 19);
	}
	else
		ft_display_file(str[1]);
}