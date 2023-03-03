/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:19:34 by ghwa              #+#    #+#             */
/*   Updated: 2023/03/02 14:25:12 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	pnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		pnbr(nb);
	}
	else if (nb < 10)
	{
		nb += 48;
		write(1, &nb, 1);
	}
	else if (nb > 9)
	{
		pnbr(nb / 10);
		pnbr(nb % 10);
	}
}

void	pstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct	s_stock_str *par)
{
	int	i;

	i = 0;
	while (par->str)
	{
		pstr(par->str);
		write(1, "\n", 1);
		pnbr(par->size);
		write(1, "\n", 1);
		pstr(par->copy);
		write(1, "\n", 1);
		par++;
	}
}
/*
int	main(void)
{
	char	*strs[6];

	strs[0] = "abcde";
	strs[1] = "peepee";
	strs[2] = "poopoo";
	strs[3] = "dont even want to think about it";
	strs[4] = "pls";
	ft_show_tab(ft_strs_to_tab(3, strs));
	return (0);
}
*/
