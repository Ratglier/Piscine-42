/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 10:13:38 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/21 20:41:10 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "my_lib.h"

int		**allocate_memory(int line, int row)
{
	int **param_array;
	int x;

	x = 0;
	param_array = malloc(line * sizeof(int *));
	while (x < line)
	{
		param_array[x] = malloc(row * sizeof(int));
		x++;
	}
	return (param_array);
}

void	free_memory(int **array, int line)
{
	int x;

	x = 0;
	while (x < line)
	{
		free(array[x]);
		x++;
	}
	free(array);
}
