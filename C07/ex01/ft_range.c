/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 16:19:56 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/25 17:28:24 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int size;
	int x;

	x = 0;
	if (max <= min)
		return (0);
	size = max - min;
	tab = (int *)malloc(size * sizeof(int));
	if (!tab)
		return (0);
	while (x < size && min < max)
	{
		tab[x] = min;
		x++;
		min++;
	}
	return (tab);
}
