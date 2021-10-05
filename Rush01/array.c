/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 10:18:47 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/21 16:56:31 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

void	print_array(int **array, int dimension)
{
	int x;
	int y;

	x = 0;
	while (x < dimension)
	{
		y = 0;
		while (y < dimension)
		{
			ft_putchar(array[x][y] + 48);
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}

int		**init_array(int dimension)
{
	int x;
	int y;
	int **array;

	x = 0;
	array = allocate_memory(dimension, dimension);
	while (x < dimension)
	{
		y = 0;
		while (y < dimension)
		{
			array[x][y] = 0;
			y++;
		}
		x++;
	}
	return (array);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		ft_putchar(str[x]);
		x++;
	}
}
