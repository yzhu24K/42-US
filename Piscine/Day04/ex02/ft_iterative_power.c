/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <yzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 18:51:12 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/05 19:35:02 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	result = nb;
	while (power-- > 1)
	{
		result *= nb;
	}
	return (result);
}
