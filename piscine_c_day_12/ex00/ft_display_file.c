/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 08:47:47 by lilam             #+#    #+#             */
/*   Updated: 2017/11/09 21:26:23 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 4096

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (1);
		while ((ret = read(fd, buf, BUF_SIZE)))
			write(1, buf, ret);
		if (close(fd) == -1)
			return (1);
	}
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	return (0);
}
