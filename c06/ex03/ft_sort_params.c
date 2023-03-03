/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:50:47 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/22 17:43:18 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] == b[i] && a[i] != '\0' && b[i] != '\0')
		i++;
	return (a[i] - b[i]);
}

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	print(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			j++;
		write(1, argv[i], j);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	base;
	int	ref;

	base = 1;
	while (base < argc)
	{
		ref = base + 1;
		while (ref < argc)
		{
			if (ft_strcmp(argv[base], argv[ref]) > 0)
				swap(&argv[base], &argv[ref]);
			else
				ref++;
		}
		base++;
	}
	print(argc, argv);
	return (0);
}
