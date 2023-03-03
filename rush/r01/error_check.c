/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:02:58 by ghwa              #+#    #+#             */
/*   Updated: 2023/02/18 13:24:18 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	num_check(char *cluev)
{
	int	clue;

	clue = 0;
	while (clue <= 16)
	{
		if ((cluev[clue] > 48) && (cluev[clue] < 53) && (clue % 2 == 0))
			|| ((cluev[clue] == ' ') && (clue % 2 == 1))
			clue++;
		else
			return (1);
	}
	return (0);
}

int	value_check(char *cluev)
{
	int	clue;

	clue = 0;
	while (clue <= 12)
	{
		if ((cluev[clue] + cluev[clue] < 5)
			&& (cluev[clue + 4] + cluev[clue] > 3))
			;
		else if ((cluev[clue] == ' ') && (clue % 2 == 1))
			i++;
		else
			return (1);
		if (((cluev[clue] == 4) && (cluev[clue + 4] == 1))
			|| ((cluev[clue] == 1) && (cluev[clue + 4] > 1))
			|| ((cluev[clue] == 2) && (cluev[clue + 4] < 4))
			|| ((cluev[clue] == 3) && (cluev[clue + 4] < 3))
			|| ((cluev[clue] == ' ') && (clue % 2 == 1)))
			clue++;
		else
			return (1);
	}
	return (0);
}
