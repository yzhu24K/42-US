/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <yzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 23:28:23 by yzhu              #+#    #+#             */
/*   Updated: 2017/01/30 23:28:28 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		len;
	char	*arg;

	if (argc == 2)
	{
		arg = argv[1];
		while (*arg == ' ' || *arg == '\t')
			arg++;
		len = 0;
		while (arg[len] != '\0' && arg[len] != ' ' && arg[len] != '\t')
			len++;
		write(1, arg, len);
	}
	write(1, "\n", 1);
	return (0);
}