/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_obvious.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 10:10:36 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/21 20:40:44 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

int		**fill_obvious(int **array, int **clues, int max)
{
	array = fill_obvious_up(array, clues[0], max);
	array = fill_obvious_down(array, clues[1], max);
	array = fill_obvious_left(array, clues[2], max);
	array = fill_obvious_right(array, clues[3], max);
	array = search_last_line(array, max);
	array = search_last_row(array, max);
	return (array);
}

int		**fill_obvious_up(int **array, int *clues, int max)
{
	int x;
	int y;

	x = 0;
	while (x < max)
	{
		if (clues[x] == max)
		{
			y = 0;
			while (y < max)
			{
				array[y][x] = y + 1;
				y++;
			}
		}
		if (clues[x] == 1)
			array[0][x] = max;
		x++;
	}
	return (array);
}

int		**fill_obvious_down(int **array, int *clues, int max)
{
	int x;
	int y;

	x = 0;
	while (x < max)
	{
		if (clues[x] == max)
		{
			y = max - 1;
			while (y >= 0)
			{
				array[y][x] = max - y;
				y--;
			}
		}
		if (clues[x] == 1)
			array[max - 1][x] = max;
		x++;
	}
	return (array);
}

int		**fill_obvious_left(int **array, int *clues, int max)
{
	int x;
	int y;

	x = 0;
	while (x < max)
	{
		if (clues[x] == max)
		{
			y = 0;
			while (y < max)
			{
				array[x][y] = y + 1;
				y++;
			}
		}
		if (clues[x] == 1)
			array[x][0] = max;
		x++;
	}
	return (array);
}

int		**fill_obvious_right(int **array, int *clues, int max)
{
	int x;
	int y;

	x = 0;
	while (x < max)
	{
		if (clues[x] == max)
		{
			y = max - 1;
			while (y >= 0)
			{
				array[x][y] = max - y;
				y--;
			}
		}
		if (clues[x] == 1)
			array[x][max - 1] = max;
		x++;
	}
	return (array);
}
