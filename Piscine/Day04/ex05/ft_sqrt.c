/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhu <yzhu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 19:07:16 by yzhu              #+#    #+#             */
/*   Updated: 2017/05/05 19:07:23 by yzhu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SQ(x) (x * x)

int	ft_sqrt(int nb)
{
	int	guess;
	int	low;
	int	high;

	low = 0;
	high = 46342;
	while (1)
	{
		guess = (high + low) / 2;
		if (SQ(guess) > nb)
			high = guess;
		else if (SQ(guess) < nb)
			low = guess;
		if (SQ(guess) == nb)
			return (guess);
		if ((high - low) <= 1)
		{
			return (0);
		}
	}
}
