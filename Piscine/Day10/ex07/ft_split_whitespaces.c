/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <yzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/06 10:51:11 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/07 14:49:10 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define SEP(x) ((x > 8 && x < 14) || x == 32)

char	**alloc_table(char **table, char *str)
{
	int		i;
	int		n_words;

	i = 0;
	n_words = 0;
	while (SEP(str[i]))
		i++;
	while (str[i] != '\0')
	{
		i++;
		if (SEP(str[i]))
		{
			n_words++;
			while (SEP(str[i]))
				i++;
		}
	}
	if (!SEP(str[i - 1]))
		n_words++;
	table = (char**)malloc(sizeof(*table) * (n_words + 1));
	table[n_words] = NULL;
	return (table);
}

char	**alloc_words(char **table, char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 1;
	while (SEP(str[i]))
		i++;
	while (str[i] != '\0')
	{
		i++;
		if (SEP(str[i]) || str[i] == '\0')
		{
			table[j] = (char*)malloc(sizeof(**table) * (k + 1));
			j++;
			k = 0;
			while (SEP(str[i]))
				i++;
		}
		k++;
	}
	return (table);
}

char	**fill_table(char **table, char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (SEP(str[i]))
		i++;
	while (str[i] != '\0')
	{
		table[j][k] = str[i];
		i++;
		k++;
		if (SEP(str[i]) || str[i] == '\0')
		{
			table[j][k] = '\0';
			j++;
			k = 0;
			while (SEP(str[i]))
				i++;
		}
	}
	return (table);
}

char	**ft_split_whitespaces(char *str)
{
	char	**table;

	table = NULL;
	table = alloc_table(table, str);
	table = alloc_words(table, str);
	table = fill_table(table, str);
	return (table);
}
