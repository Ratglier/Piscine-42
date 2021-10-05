/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 12:13:16 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/31 16:29:21 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

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
	ft_putchar('\n');
}

void	ft_putnbr(int nb)
{
	int unite;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb < 10)
		{
			ft_putchar(nb + '0');
		}
		else
		{
			unite = nb % 10;
			ft_putnbr(nb / 10);
			ft_putchar(unite + '0');
		}
	}
	ft_putchar('\n');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int x;

	x = 0;
	while (par[x].str)
	{
		ft_putstr(par[x].str);
		ft_putnbr(par[x].size);
		ft_putstr(par[x].copy);
		x++;
	}
}
