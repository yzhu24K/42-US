/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 20:32:01 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/07 21:24:16 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*dst;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	if (!(dst = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[len] = '\0';
	return (dst);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*dst;
	t_stock_par	*rst;

	i = 0;
	if (!(rst = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	dst = rst;
	while (av[i])
	{
		dst->size_param = ft_strlen(av[i]);
		dst->str = av[i];
		dst->copy = ft_strdup(av[i]);
		dst->tab = ft_split_whitespaces(av[i]);
		i++;
		dst++;
	}
	dst->str = 0;
	return (rst);
}
