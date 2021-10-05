/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_last.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 12:26:47 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/21 20:40:28 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "my_lib.h"

int		*fill_last(int max, int *line);

int		**search_last_line(int **array, int max)
{
	int x;
	int y;
	int cmpt;

	x = 0;
	while (x < max)
	{
		y = 0;
		cmpt = 0;
		while (y < max)
		{
			if (array[x][y] == 0)
				cmpt++;
			y++;
		}
		y--;
		if (cmpt == 1)
			array[x] = fill_last(max, array[x]);
		x++;
	}
	return (array);
}

int		**search_last_row(int **array, int max)
{
	int x;
	int y;
	int cmpt;

	x = 0;
	cmpt = 0;
	while (x < max)
	{
		y = 0;
		while (y < max)
		{
			if (array[y][x] == 0)
				cmpt++;
			y++;
		}
		y--;
		if (cmpt == 1)
			array[y] = fill_last(max, array[y]);
		x++;
	}
	return (array);
}

int		*fill_last(int max, int *line)
{
	int sum_line;
	int sum_max;
	int x;
	int pos;

	sum_max = max * (max + 1) / 2;
	sum_line = 0;
	x = 0;
	while (x < max)
	{
		if (line[x] == 0)
			pos = x;
		sum_line += line[x];
		x++;
	}
	line[pos] = sum_max - sum_line;
	return (line);
}
