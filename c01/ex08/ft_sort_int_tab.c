/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:03:25 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/13 17:03:27 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>
*/

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	*ref;
	int	i;
	int	*base;

	base = tab;
	ref = tab + 1;
	i = 1;
	while (i < size)
	{
		if (*ref < *tab)
		{
			swap(ref, tab);
			ref = tab + 1;
		}
		else if (ref == base + size - 1)
		{
			tab++;
			i++;
			ref = tab + 1;
		}
		else
		{
			ref++;
		}
	}
}

/*
int	main(void)
{
	int	arr[5];
	int a;

	arr[0] = 2;
	arr[1] = 100;
	arr[2] = -5;
	arr[3] = 0;
	arr[4] = 4;

	a = arr[0];
	//int	arr[10] = {3, 5, 2, 1, 9, 8, 7, 4, 0, 6};

	ft_sort_int_tab(arr, 5);
	int i;
	i = 0;
	while (i < 5)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	return (0);
}
*/
