/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:53:13 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/16 12:27:21 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	x;

	i = 1;
	x = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		x *= i;
		i++;
	}
	return (x);
}

/*
int main(void)
{
	int fac = 4;
	printf("%d",ft_iterative_factorial(fac));
	return (0);
}
*/
