/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:59:13 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/25 09:23:21 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int nb)
{
	if (nb < 0)
		return (-1);
	else if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	return (ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2));
}

/*
int main(void)
{
	int index;

	index = 10;
	printf("%d", ft_fibonacci(index));
}
*/
