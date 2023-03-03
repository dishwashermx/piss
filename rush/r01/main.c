/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:14:21 by melee             #+#    #+#             */
/*   Updated: 2023/02/18 14:32:20 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		num_check(char *cluev);
int		value_check(char *cluev);
void	clue_to_input_array(char *cluev, int *input_array);

int	main(int argc, char **argv)
{
	int	input_array[4][4];

	if (num_check(argv[1][0]))
	{
		write(1, "Incorrect input parameter", 25);
		return (0);
	}	
	if (value_check(argv[1][0]))
	{
		write(1, "Incorrect input parameter", 25);
	}
	clue_to_input_array(argv[1][0], input_array);


}
