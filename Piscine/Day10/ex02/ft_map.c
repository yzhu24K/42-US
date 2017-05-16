/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 19:44:02 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/08 19:49:44 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*tt;
	int		i;

	i = 0;
	if (!(tt = (int*)malloc(sizeof(int) * length)))
		return (0);
	while (tab[i])
	{
		tt[i] = f(tab[i]);
		i++;
	}
	return (tt);
}
