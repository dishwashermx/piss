/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:01:25 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/22 17:40:40 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (nb >= 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb);
}

/*
int main(void)
{
	int nb;
	int power;

	nb = -7;
	power = 6;
	printf("%d", ft_recursive_power(nb, power));
}
*/
