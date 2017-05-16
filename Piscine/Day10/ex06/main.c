/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <yzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 20:30:41 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/08 21:52:12 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	int		op;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (ft_error(argv[2], b))
		return (0);
	op = ft_op(argv[2], a, b);
	ft_putnbr(op);
	ft_putchar('\n');
	return (0);
}
