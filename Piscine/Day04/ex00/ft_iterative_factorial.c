/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <yzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 18:45:17 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/05 19:33:25 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		result;

	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	result = 1;
	while (nb > 1)
		result *= nb--;
	return (result);
}
