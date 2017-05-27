/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 12:39:47 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/27 12:27:26 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1000

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
	return (0);
}

int		main(int ac, char **av)
{
	int		fd;
	int		rd;
	char	buf[BUF_SIZE + 1];

	if (ac == 1)
		return (ft_error("File name missing."));
	if (ac > 2)
		return (ft_error("Too many arguments."));
	if ((fd = open(av[1], O_RDONLY)) == -1)
		return (1);
	if (ac == 2)
	{
		rd = read(fd, buf, BUF_SIZE);
		buf[rd] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}
