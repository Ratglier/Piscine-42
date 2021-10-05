/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 13:23:40 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/15 09:20:27 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		x;
	int		y;
	char	first[2];
	char	second[2];

	x = 0;
	while (x < 99)
	{
		y = x + 1;
		first[0] = (x / 10) + 48;
		first[1] = (x % 10) + 48;
		while (y < 100)
		{
			second[0] = (y / 10) + 48;
			second[1] = (y % 10) + 48;
			write(1, &first, 2);
			write(1, " ", 1);
			write(1, &second, 2);
			if (x != 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
