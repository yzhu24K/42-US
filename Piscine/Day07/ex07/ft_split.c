/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <yzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/06 20:17:41 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/07 14:59:05 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_sep(char str, char *charset)
{
	while (*charset)
	{
		if (str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

char	**alloc_tab(char **tab, char *str, char *charset)
{
	int		i;
	int		n_words;

	i = 0;
	n_words = 0;
	while (ft_is_sep(str[i], charset))
		i++;
	while (str[i])
	{
		i++;
		if (ft_is_sep(str[i], charset))
		{
			n_words++;
			while (ft_is_sep(str[i], charset))
				i++;
		}
	}
	if (!ft_is_sep(str[i - 1], charset))
		n_words++;
	if (!(tab = (char**)malloc(sizeof(char *) * (n_words + 1))))
		return (0);
	tab[n_words] = NULL;
	return (tab);
}

char	**alloc_words(char **tab, char *str, char *charset)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 1;
	while (ft_is_sep(str[i], charset))
		i++;
	while (str[i])
	{
		i++;
		if (ft_is_sep(str[i], charset) || str[i] == '\0')
		{
			tab[j] = (char*)malloc(sizeof(**tab) * (k + 1));
			j++;
			k = 0;
			while (ft_is_sep(str[i], charset))
				i++;
		}
		k++;
	}
	return (tab);
}

char	**fill_tab(char **tab, char *str, char *charset)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (ft_is_sep(str[i], charset))
		i++;
	while (str[i])
	{
		tab[j][k] = str[i];
		i++;
		k++;
		if (ft_is_sep(str[i], charset) || str[i] == '\0')
		{
			tab[j][k] = '\0';
			j++;
			k = 0;
			while (ft_is_sep(str[i], charset))
				i++;
		}
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = NULL;
	tab = alloc_tab(tab, str, charset);
	tab = alloc_words(tab, str, charset);
	tab = fill_tab(tab, str, charset);
	return (tab);
}
