/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:28:35 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/25 09:50:11 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;
	int		n;

	if (src == NULL)
		return (NULL);
	n = 0;
	i = 0;
	while (src[n] != '\0')
		n++;
	dst = malloc(n + 1);
	if (dst == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
int main(void)
{
	char eg[100] = "where the spirit of the Lord, is liberty";
	printf("%s", ft_strdup(eg));
return (0);
}
*/
