/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <yzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 22:21:45 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/05 23:06:50 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		i;
	char	*des;

	i = 0;
	while (str[i])
		i++;
	des = (char*)malloc(sizeof(char) * (i + 1));
	if (!des)
		return (NULL);
	i = 0;
	while (str[i])
	{
		des[i] = str[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}
