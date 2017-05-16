/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_func.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <yzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 21:38:58 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/08 22:10:33 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_atoi(char *str)
{
	int		sign;
	int		nb;

	sign = 1;
	nb = 0;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while ((*str >= '0') && (*str <= '9'))
		nb = nb * 10 + (*str++ - '0');
	return (nb * sign);
}

int		ft_error(char *str, int nbr)
{
	if (nbr == 0)
	{
		if (*str == '/')
		{
			write(1, "Stop : division by zero\n", 24);
			return (1);
		}
		if (*str == '%')
		{
			write(1, "Stop : modulo by zero\n", 22);
			return (1);
		}
	}
	return (0);
}

int		ft_op(char *str, int a, int b)
{
	if (*str == '+')
		return (ft_add(a, b));
	else if (*str == '-')
		return (ft_sub(a, b));
	else if (*str == '*')
		return (ft_mul(a, b));
	else if (*str == '/')
		return (ft_div(a, b));
	else if (*str == '%')
		return (ft_mod(a, b));
	else
		return (0);
}