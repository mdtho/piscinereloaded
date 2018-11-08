/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:07:14 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/06 18:29:52 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		ft_display_file(char *file)
{
	int		fd;
	char	buffer[5000];
	int		bytes_read;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (0);
	bytes_read = read(fd, buffer, sizeof(buffer));
	if (bytes_read < 0)
		return (0);
	while (bytes_read)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, sizeof(buffer));
		if (bytes_read < 0)
			return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	ft_display_file(argv[1]);
	return (0);
}
