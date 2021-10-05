/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   params.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 10:12:05 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/21 20:55:51 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "my_lib.h"

int		**allocate_memory(int line, int row);
int		check_max(int **clues, int max);
int		check_opposite(int **clue, int max);

int		get_size(int nb)
{
	if (nb % 4 == 0)
		return (nb / 4);
	return (0);
}

int		check_params(char *str)
{
	int x;
	int count;

	x = 2;
	count = 1;
	if ((str[0] < 48 || str[0] > 57) || str[1] != 32)
		return (0);
	while (str[x])
	{
		if ((x % 2 == 0) && (str[x] > 47 && str[x] < 58))
			count++;
		if ((x % 2 != 0) && (str[x] != 32))
			return (0);
		x++;
	}
	return (get_size(count));
}

int		**parse_parameters(char *str, int dimension)
{
	int x;
	int y;
	int z;
	int **clues;

	x = 0;
	y = 0;
	clues = allocate_memory(4, dimension);
	while (str[x])
	{
		z = 0;
		while (z < dimension)
		{
			if (*str >= 48 && *str <= 57)
			{
				clues[y][z] = *str - 48;
				z++;
			}
			str++;
		}
		y++;
	}
	if (!check_max(clues, dimension) || !check_opposite(clues, dimension))
		return (0);
	return (clues);
}

int		check_max(int **clues, int max)
{
	int x;
	int y;
	int max_count;

	x = 0;
	while (x < 4)
	{
		max_count = 0;
		y = 0;
		while (y < max)
		{
			if (clues[x][y] == max)
				max_count++;
			y++;
		}
		if (max_count > 1)
			return (0);
		x++;
	}
	return (1);
}

int		check_opposite(int **clue, int max)
{
	int x;
	int y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < max)
		{
			if (clue[x][y] == max)
			{
				if ((x == 0 && clue[1][y] != 1) || (x == 1 && clue[0][y] != 1))
					return (0);
				if ((x == 2 && clue[3][y] != 1) || (x == 3 && clue[2][y] != 1))
					return (0);
			}
			y++;
		}
		x++;
	}
	return (1);
}
