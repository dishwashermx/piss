/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:37:59 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/28 12:01:08 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char **printstr(char **dest, char *str, char *charset, int s, int e, int a)
{
	int	b;

	b= 0;
	dest[a] = malloc(s + 1);
	while (s < e + 1)
	{
		dest[a][b] = str[s];
		b++;
		s++;
	}
	dest[b] = '\0';
	return (dest);
}


char	**ft_split(char *str, char *charset)
{
	int i;
	int e;
	int	c;
	int a;
	char **dest;

	a = 0;
	i = 0;
	e = 0;
	while (str[i] != '\0')
	{
		c = 0;
		while(str[i] == charset[c] && charset[c] != '\0')
		{
			i++;
			c++;
		}
		if (charset[c] == '\0')
		{
			w += i;
			dest = printstr(dest, str, charset, i, e)
		}
		else
			i++;
	}
	return (dest)
}

int	main(void)
{
	int i;
	char eg[] = "Do you even life bro 609";
	char sep[] = " ";

	i = 0;
	while (i < stringlen)
	{
		printf("%s", ft_split[i++]);
	}
	return (0);
}
