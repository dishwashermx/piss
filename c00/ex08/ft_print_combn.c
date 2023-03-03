/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcombn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:08:29 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/10 11:43:44 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_out(int n, int *list, int status)
{
	int	i;

	if (status == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	i = 0;
	while (i < n)
	{
		ft_putchar(list[i] + '0');
		i++;
	}
}

void	ft_print_add(int n, int *list)
{
	int	i;
	int	max;

	i = n - 1;
	max = 9;
	while (list[i] == max)
	{
		i--;
		max--;
	}
	list[i] += 1;
	while (i < n)
	{
		list[i + 1] = list[i] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	list[10];

	i = 0;
	while (i < n)
	{
		list[i] = i;
		i++;
	}
	ft_print_out(n, list, 0);
	while (!(list[0] == 10 - n && list[n - 1] == 9))
	{
		if (list[n - 1] != 9)
		{
			list[n - 1]++;
		}
		else
		{
			ft_print_add(n, list);
		}
		ft_print_out(n, list, 1);
	}
}

/*
int	main(void)
{
	ft_print_combn(9);
}
*/
