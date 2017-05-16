/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <yzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 23:17:13 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/06 22:16:04 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int *iter;

	if (min >= max)
		return (0);
	if (!(range = malloc((max - min) * sizeof(int))))
		return (0);
	iter = range;
	while (min < max)
		*iter++ = min++;
	return (range);
}
