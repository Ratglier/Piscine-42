/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 22:18:42 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/25 13:35:48 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int x;

	if (!argc)
		return (1);
	x = argc - 1;
	while (x > 0)
	{
		ft_putstr(argv[x]);
		write(1, "\n", 1);
		x--;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		write(1, &str[x], 1);
		x++;
	}
}
