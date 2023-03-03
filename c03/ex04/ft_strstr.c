/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:10:36 by ghwa              #+#    #+#             */
/*   Updated: 2023/03/01 15:27:28 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	t;

	s = 0;
	t = 0;
	while (str[s] != '\0')
	{
		while (str[s] == to_find[t] && to_find[t] != '\0')
		{
			t++;
			s++;
		}
		if (to_find[t] == '\0')
		{
			return (&str[s - t]);
		}
		else
		{
			s++;
			t = 0;
		}
	}
	return (NULL);
}


int	main(void)
{
	char needle[] = "23";
	char haystack[] = "I never thought he'd be such a manwhore";

	printf("%s", ft_strstr(haystack, needle));
	return (0);
}

