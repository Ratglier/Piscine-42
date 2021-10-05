/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:01:55 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/23 17:23:48 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		check_base(char *base);
int		ft_strlen(char *str);

void	ft_putnbr_base(int nbr, char *base)
{
	int base_length;

	base_length = check_base(base);
	if (base_length)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			if (nbr == -2147483648)
			{
				ft_putnbr_base(nbr / -base_length, base);
				ft_putnbr_base(nbr % -base_length, base);
			}
			else
				ft_putnbr_base(nbr * -1, base);
		}
		else if (nbr >= base_length)
		{
			ft_putnbr_base(nbr / base_length, base);
			ft_putnbr_base(nbr % base_length, base);
		}
		else
			ft_putchar(base[nbr % base_length]);
	}
}

int		check_base(char *base)
{
	int base_length;
	int x;
	int y;

	base_length = ft_strlen(base);
	x = 0;
	if (base_length <= 1)
		return (0);
	while (base[x])
	{
		y = x + 1;
		if (base[x] == '-' || base[x] == '+')
			return (0);
		while (base[y])
		{
			if (base[x] == base[y])
				return (0);
			y++;
		}
		x++;
	}
	return (base_length);
}

int		ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
