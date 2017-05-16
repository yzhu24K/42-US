/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 21:35:41 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/07 21:54:37 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int a)
{
	if (a >= 10)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else
		ft_putchar(a + '0');
}

void	ft_show_tab(struct s_stock_par *par)
{
	char	**tt;

	while (par->str)
	{
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putstr(par->copy);
		ft_putchar('\n');
		tt = par->tab;
		while (*tt)
		{
			ft_putstr(*tt++);
			ft_putchar('\n');
		}
		par++;
	}
}
