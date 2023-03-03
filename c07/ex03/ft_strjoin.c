/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 09:57:43 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/22 10:59:55 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	n = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			j++;
		n += j;
		if (i != size - 1)
		{
			j = 0;
			while (sep[j] != '\0')
				j++;
			n += j;
		}
		n += 1;
		i++;
	}
	n -= j;
	return (n);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		d;
	int		j;
	char	*dest;

	d = 0;
	j = 0;
	dest = malloc(ft_strlen(size, strs, sep) + 1);
	if (size < 1 || dest == NULL)
		return (dest);
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
			dest[d++] = strs[j][i++];
		i = 0;
		while (sep[i] != '\0' && j != size - 1)
			dest[d++] = sep[i++];
		j++;
	}
	dest[d] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char *group[];
	int i;
	int j;
	char a;

	j = 0;
	i = 0;
	while (i < 5){
		group[i] = malloc(6);
		a = 'a';
		j = 0;
		while (j < 5){
			group[i][j] = a;
			j++;
			a++;
		}
		group[i][j] = '\0';
		i++;
	}
	printf("%s", ft_strjoin(5, group, ", "));
	return (0);
}
*/
