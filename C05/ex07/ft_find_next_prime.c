/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 20:30:58 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/25 13:34:01 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb);

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	if (nb % 2 == 0)
		nb++;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

int		ft_is_prime(int nb)
{
	int x;

	x = 2;
	if (nb < 2)
		return (0);
	while (x <= nb / x)
	{
		if (nb % 2 == 0 || nb < 2 || nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}
