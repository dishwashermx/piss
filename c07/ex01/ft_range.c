/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:06:00 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/22 10:59:31 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	i = 0;
	if (min >= max)
		return (NULL);
	result = malloc((max - min + 1) * 4);
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	result[i] = '\0';
	return (result);
}
