/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:38:41 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/25 09:21:55 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		num *= nb;
		power--;
	}
	return (num);
}

/*
int main(void)
{
	int nb = -11;
	int power = 9;
	printf("%d",ft_interative_power(nb, power));
}
*/
