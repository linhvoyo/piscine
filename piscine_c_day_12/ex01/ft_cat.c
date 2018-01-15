/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 08:47:47 by lilam             #+#    #+#             */
/*   Updated: 2017/11/09 21:25:39 by lilam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#define BUF_SIZE 4096

int		std_files(int argc, char **argv)
{
	int		fd;
	int		ret;
	int		i;
	char	buf[BUF_SIZE];

	i = 1;
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			i++;
			continue;
		}
		while ((ret = read(fd, buf, BUF_SIZE)))
			write(1, buf, ret);
		close(fd);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	std_files(argc, argv);
	return (errno);
}
