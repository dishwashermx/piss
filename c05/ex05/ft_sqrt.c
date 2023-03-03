/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:24:38 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/27 14:44:42 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (i);
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	int nb = 49;
	printf("%d", ft_sqrt(nb));
	return (0);
}
*/
