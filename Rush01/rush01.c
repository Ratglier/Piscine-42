/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 09:39:35 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/21 23:33:09 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

int		main(int argc, char **argv)
{
	int dimension;
	int **clues;
	int **array;

	if (argc != 2)
		return (error_found());
	dimension = check_params(argv[1]);
	if (!dimension)
		return (error_found());
	clues = parse_parameters(argv[1], dimension);
	if (!clues)
		return (error_found());
	array = init_array(dimension);
	array = fill_obvious(array, clues, dimension);
	launch_backtracking(array, dimension);
	print_array(array, dimension);
	free_memory(array, dimension);
	free_memory(clues, 4);
	return (0);
}

int		launch_backtracking(int **array, int max)
{
	int x;
	int y;
	int res;

	x = 0;
	while (x < max)
	{
		y = 0;
		while (y < max)
		{
			res = skyscrapper_helper(array, x, y, max);
			y++;
		}
		x++;
	}
	return (res);
}
