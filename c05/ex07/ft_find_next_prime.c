/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:06:54 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/27 14:48:13 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (2);
	while (i <= nb / i)
	{
		if (nb % i != 0)
			i++;
		else
		{
			nb++;
			i = 2;
		}
	}
	return (nb);
}
/*
int	main(void)
{
	int nb = 2147483646;
	printf("%d", ft_find_next_prime(nb));
	return (0);
}
*/
