/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <yzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 20:30:41 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/09 00:03:58 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

int		ft_usage(int a, int b)
{
	a = 0;
	b = 0;
	write(1, "error : only [ + - * / % ] are accepted.\n", 41);
	return (0);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	int		i;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (ft_error(argv[2], b))
		return (0);
	i = 0;
	while (i < 5)
	{
		if (*g_opptab[i].c == argv[2][0])
		{
			ft_putnbr((g_opptab[i].func)(a, b));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	(g_opptab[5].func)(a, b);
	return (0);
}
