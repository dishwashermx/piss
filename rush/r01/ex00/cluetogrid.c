/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cluetogrid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:02:16 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/18 12:45:51 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	cluettogrid(char **cluev)
{
	int c;
	int row;
	int col;
	int grid[4][4];

	/*
	while (cluev[1][c] != '\0')
	{
		if (clue[1][c] == ' ')
			c++;
		nb = (nb * 10) + (clue[1][c] - '0');
		c++;
	}
	*/

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			clue[1][c] == grid[row][col];
			col++;
		}
		row++;
	}
}

int	main(void)
{
	char clues[1][33] = "1 1 1 1 2 2 2 2 3 3 3 3 4 4 4 4";
	printf("%s", cluettogrid(clues));
	return (0);
}
