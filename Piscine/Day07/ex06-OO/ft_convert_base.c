/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoiseye <mirror12k@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 12:30:39 by nmoiseye          #+#    #+#             */
/*   Updated: 2017/01/18 20:05:49 by nmoiseye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		my_indexof(char *str, char find)
{
	int i;

	i = 0;
	if (find == 0)
		return (-1);
	while (str[i] != 0)
		if (str[i] == find)
			return (i);
		else
			i++;
	return (-1);
}

int		my_atoi_base(char *nbr, char *base, int base_size)
{
	int result;
	int sign;
	int c;

	sign = (*nbr == '-') * -2 + 1;
	if (*nbr == '+' || *nbr == '-')
		nbr++;
	result = 0;
	c = my_indexof(base, *nbr++);
	while (c != -1)
	{
		result = result * base_size + c;
		c = my_indexof(base, *nbr++);
	}
	return (result * sign);
}

char	my_convert_digit(int n, char *base)
{
	if (n < 0)
		return (base[-n]);
	else
		return (base[n]);
}

char	*my_itoa_base(int n, char *base, int base_size)
{
	int		i;
	int		size;
	int		negative;
	char	*res;

	negative = n < 0;
	size = 2 + negative;
	i = n;
	while ((i /= base_size) != 0)
		size++;
	res = (char*)malloc(size);
	res[--size] = '\0';
	res[--size] = my_convert_digit(n % base_size, base);
	while ((n /= base_size) != 0)
		res[--size] = my_convert_digit(n % base_size, base);
	if (negative)
		res[--size] = '-';
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int b1;
	int b2;
	int n;

	b1 = 0;
	while (base_from[b1] != 0)
		b1++;
	b2 = 0;
	while (base_to[b2] != 0)
		b2++;
	n = my_atoi_base(nbr, base_from, b1);
	return (my_itoa_base(n, base_to, b2));
}
