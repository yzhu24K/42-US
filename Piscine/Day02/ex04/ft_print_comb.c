/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 14:12:29 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/05 14:26:18 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int		n;
	int		find;

	n = -1;
	find = 0;
	while (++n < 1000)
	{
		if ((n / 100 < n % 100 / 10) && (n % 100 / 10 < n % 10))
		{
			if (find++ != 0)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar((n / 100) + '0');
			ft_putchar((n % 100 / 10) + '0');
			ft_putchar((n % 10) + '0');
		}
	}
}