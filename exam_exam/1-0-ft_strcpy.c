/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-0-ft_strcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 17:03:19 by yzhu              #+#    #+#             */
/*   Updated: 2017/01/31 17:40:48 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
