/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 20:01:26 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/16 10:14:04 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
