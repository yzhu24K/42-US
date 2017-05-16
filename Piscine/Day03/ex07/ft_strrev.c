/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 21:17:49 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/04 22:03:33 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str++ != 0)
		count++;
	return (count);
}

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	int		j;
	char	tmp;

	len = ft_strlen(str);
	i = 0;
	j = len - 1;
	while (*str && (i < j))
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}
