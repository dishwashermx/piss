/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:14:35 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/25 09:25:36 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb < 4)
		return (1);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

/*
int	main(void)
{
	int nb = 2;
	printf("%d", ft_is_prime(nb));
	return (0);
}
*/
