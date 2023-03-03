/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:46:59 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/22 15:12:01 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}
*/

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	*pbeg;
	int	*pend;

	pbeg = tab;
	pend = tab + size - 1;
	while (pbeg < pend)
	{
		swap(pbeg, pend);
		pbeg++;
		pend--;
	}
}

/*
int main()
{
	int *tab;

	tab[] = {1, 2, 3, 4, -5};
	ft_rev_int_tab(tab, 5);
	while (tab)
	{
		putchar(tab);
		tab++;
	}
	return (0);
}
*/
