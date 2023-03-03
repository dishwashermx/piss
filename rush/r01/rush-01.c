/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:00:23 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/18 11:02:46 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

// col1up col2up col3up col4up
// col1down col2down col3down col4down
// row1left row2left row3left row4left
// row1right row2right row3right row4right

int	main(int cluec, char *cluev[])
{
	int clue;
	int *grid;
	int row;
	int col;
	int filled;
	
	clue = 1;
	grid = malloc(4 * sizeof(int));
	while (filled < 16)
	{
		if (cluev[clue][0] == 1)
		{
			if (clue < 9 && (clue % 4 != 0)
				grid[(clue % 4) - clue][(clue % 4)] = 4;
		
