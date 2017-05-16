/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <yzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 17:39:01 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/05 17:57:13 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	output_number_pair(int n1, int n2, int *first)
{
	if (n1 < n2)
	{
		if (*first)
			*first = 0;
		else
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		ft_putchar((n1 / 10) + '0');
		ft_putchar((n1 % 10) + '0');
		ft_putchar(' ');
		ft_putchar((n2 / 10) + '0');
		ft_putchar((n2 % 10) + '0');
	}
}

void	ft_print_comb2(void)
{
	int counter;
	int first;

	counter = -1;
	first = 1;
	while (counter++ < 10000)
		output_number_pair(counter / 100, counter % 100, &first);
}
