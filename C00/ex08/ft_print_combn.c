/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:31:52 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/16 09:23:51 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int unite;

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

void	ft_print_combn(int n)
{
	int prev[n];
	int curr[n];
	int count;
	int pos;

	pos = n - 1;
	while (pos >= 0)
	{
		if (prev[pos] == 9)
			curr[pos - 1] = prev[pos - 1] + 1;
		curr[pos] = curr[pos - 1] + 1;
		pos--;
	}
	prev = curr;
	while (count < n)
	{
		ft_putnbr(num[count]);
		count++;
	}
}
