/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 16:53:59 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/30 08:55:51 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int x;
	int *tab;

	x = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = malloc(size * sizeof(int));
	if (!(tab))
		return (-1);
	while (x < size && min < max)
	{
		tab[x] = min;
		x++;
		min++;
	}
	*range = tab;
	return (size);
}
