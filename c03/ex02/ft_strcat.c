/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:07:52 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/21 09:30:34 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
		dest[a++] = src[b++];
	dest[a] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char eg1[] = "Would it be wrong if we-";
	char eg2[] = "NO, I mean, no it won't, mommy won't know";

	printf("%s\n",ft_strcat(eg1, eg2));
	return (0);
}
*/
