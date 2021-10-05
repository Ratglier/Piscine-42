/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:25:58 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/22 11:42:25 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_printable(char c);
void	ft_putchar(char c);
void	int_to_hex(int dec);

void	ft_putstr_non_printable(char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		if (!is_printable(str[x]))
		{
			ft_putchar('\\');
			int_to_hex(str[x]);
		}
		else
			ft_putchar(str[x]);
		x++;
	}
}

void	int_to_hex(int dec)
{
	ft_putchar((dec / 16) + 48);
	if (dec % 16 < 10)
		ft_putchar((dec % 16) + 48);
	else
		ft_putchar((dec % 16) + 87);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_printable(char c)
{
	if (c < 32 || c > 127)
		return (0);
	return (1);
}
