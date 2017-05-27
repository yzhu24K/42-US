/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <yzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 12:43:11 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/27 13:05:16 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUF_SIZE 10

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

int		ft_error(char *str)
{
	if (!str)
		return (ft_error("String is NULL."));
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
	return (1);
}

int		main(int ac, char **av)
{
	int		fd;
	int		rd;
	char	buf[BUF_SIZE + 1];

	if (ac == 1)
		return (ft_error("File name missing."));
	av++;
	while (*av)
	{
		if ((fd = open(*av, O_RDONLY)) == -1)
			return (ft_error("No such file or directory."));
		else
			while ((rd = read(fd, buf, BUF_SIZE)))
			{
				buf[rd] = '\0';
				ft_putstr(buf);
			}
		close(fd);
		av++;
	}
	return (errno);
}
