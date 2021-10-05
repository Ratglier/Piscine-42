/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   traversalorder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamadi <nsamadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 13:56:23 by nsamadi           #+#    #+#             */
/*   Updated: 2021/03/21 23:37:41 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

int		skyscrapper_helper(int **grid, int row, int col, int max)
{
	if (row == max)
		return (1);
	if (grid[row][col])
	{
		if (col == max)
		{
			if (skyscrapper_solver(grid, row + 1, col, max))
				return (1);
			else if (skyscrapper_solver(grid, row, col + 1, max))
				return (1);
			return (0);
		}
	}
	return (is_valid(grid, row, col, max));
}

int		skyscrapper_solver(int **grid, int row, int col, int max)
{
	int next_nbr;

	next_nbr = 1;
	while (next_nbr <= max)
	{
		print_array(grid, max);
		if (is_valid(grid, row, col, max))
		{
			grid[row][col] = next_nbr;
			if (col == max - 1)
			{
				if (skyscrapper_helper(grid, row + 1, col, max))
					return (1);
			}
			else
			{
				if (skyscrapper_helper(grid, row, col + 1, max))
					return (1);
			}
			grid[row][col] = 0;
		}
		next_nbr++;
	}
	return (1);
}

int		is_valid(int **grid, int row, int col, int max)
{
	int i;

	i = 0;
	while (i < max)
	{
		if (grid[i][col])
		{
			return (1);
		}
		if (grid[row][i])
		{
			return (1);
		}
		i++;
	}
	if (!boucle(grid, max))
		return (0);
	return (1);
}

int		boucle(int **grid, int max)
{
	int x;
	int y;

	x = 0;
	while (x < max)
	{
		y = 0;
		while (y < max)
		{
			if (grid[x][y] == 0)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}
