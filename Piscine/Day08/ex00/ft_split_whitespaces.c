/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 12:41:01 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/07 15:09:02 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define SEP(x) ((x > 8 && x < 14) || x == 32)

char	**alloc_tab(char **tab, char *str)
{
	int		n_words;
	int		i;

	i = 0;
	n_words = 0;
	while (SEP(str[i]))
		i++;
	while (str[i])
	{
		i++;
		if (SEP(str[i]) || str[i] == '\0')
		{
			n_words++;
			while (SEP(str[i]))
				i++;
		}
	}
	if (!(tab = (char**)malloc(sizeof(char *) * (n_words + 1))))
		return (0);
	tab[n_words] = NULL;
	return (tab);
}

char	**alloc_words(char **tab, char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 1;
	while (SEP(str[i]))
		i++;
	while (str[i])
	{
		i++;
		if (SEP(str[i]) || str[i] == '\0')
		{
			tab[j] = (char*)malloc(sizeof(char) * (k + 1));
			j++;
			k = 0;
			while (SEP(str[i]))
				i++;
		}
		k++;
	}
	return (tab);
}

char	**fill_tab(char **tab, char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (SEP(str[i]))
		i++;
	while (str[i])
	{
		tab[j][k] = str[i];
		i++;
		k++;
		if (SEP(str[i]) || str[i] == '\0')
		{
			tab[j][k] = '\0';
			j++;
			k = 0;
			while (SEP(str[i]))
				i++;
		}
	}
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char **tab;

	tab = NULL;
	tab = alloc_tab(tab, str);
	tab = alloc_words(tab, str);
	tab = fill_tab(tab, str);
	return (tab);
}
