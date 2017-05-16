/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/06 10:25:18 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/06 10:42:48 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		my_len(int argc, char **argv)
{
	int		i;
	int		j;
	int		len;

	i = 1;
	j = 0;
	len = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			j++;
			len++;
		}
		i++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*concat;
	int		i;
	int		j;
	int		n;
	int		len;

	i = 1;
	j = 0;
	n = 0;
	len = my_len(argc, argv) + argc;
	if (!(concat = (char*)malloc(sizeof(char *) * (len + 1))))
		return (0);
	while (i < argc)
	{
		while (argv[i][j])
			concat[n++] = argv[i][j++];
		i++;
		j = 0;
		if (i < argc)
			concat[n++] = '\n';
	}
	concat[n] = '\0';
	return (concat);
}
