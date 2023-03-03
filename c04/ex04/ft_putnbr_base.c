/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:58:19 by ghwa              #+#    #+#             */
/*   Updated: 2023/03/02 12:17:12 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_nb(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i + 1] != '\0' && base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || base[j] == '-' || base[j] == '+')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*ft_revstr(char *dest)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (dest[j + 1] != '\0')
		j++;
	while (i < j)
	{
		c = dest[i];
		dest[i] = dest[j];
		dest[j] = c;
		i++;
		j--;
	}
	return (dest);
}

void	ft_putnbr_base(int nb, char *base)
{
	int		i;
	int		n;
	int		temp;
	char	dest[33];

	n = base_nb(base);
	i = 0;
	if (base_check(base) == 0 || n < 2)
		return ;
	else
	{
		while (nb != 0)
		{
			temp = nb % n;
			dest[i] = base[temp];
			nb = nb / n;
			i++;
		}
		dest[i] = '\0';
		ft_revstr(dest);
		i = 0;
		while (dest[i] != '\0')
		{
			write(1, &dest[i], 1);
			i++;
		}
	}
}

int	main(void)
{
	char	base[3];

	base[0] = '0';
	base[1] = '1';
	base[2] = '2';
	ft_putnbr_base(20, base);
	return (0);
}
