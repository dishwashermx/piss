/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:23:17 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/23 09:49:55 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n <= 0)
		return (0);
	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char	eg1[] ="test1cles";
	char	eg2[] ="test2";

	printf("%d", ft_strncmp(eg1, eg2, 8));
}
*/
