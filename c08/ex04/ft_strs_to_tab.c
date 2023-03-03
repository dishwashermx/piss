/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:51:36 by ghwa              #+#    #+#             */
/*   Updated: 2023/03/03 12:22:05 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int	ft_strlen(char *av)
{
	int	i;

	i = 0;
	while (av[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc(ft_strlen(src) + 1);
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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*par;
	int			i;

	par = malloc(sizeof(t_stock_str) * (ac + 1));
	if (par == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		par[i].size = ft_strlen(av[i]);
		par[i].str = av[i];
		par[i].copy = ft_strdup(av[i]);
		i++;
	}
	par[i].str = 0;
	par[i].size = 0;
	par[i].copy = 0;
	return (par);
}
