/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:07:52 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/21 15:44:36 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && a < (size - 1))
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (a);
}

/*
int	main(void)
{
	char eg2[] = "Would it be wrong if we-";
	char eg1[] = "NO, I mean, no it won't, mommy won't know";

	printf("%d\n",ft_strlcat(eg1, eg2, 100));
	return (0);
}
*/
