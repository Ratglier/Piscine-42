/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:01:52 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/23 10:08:38 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char c);
int		get_sign(char *str);
int		get_numbers(char *str);

int		ft_atoi(char *str)
{
	int x;
	int sign;
	int num;

	x = 0;
	sign = 0;
	num = 0;
	while (is_space(str[x]))
		x++;
	sign = get_sign(&str[x]);
	while (str[x] == '-' || str[x] == '+')
		x++;
	num = get_numbers(&str[x]) * sign;
	return (num);
}

int		get_numbers(char *str)
{
	int x;
	int num;

	x = 0;
	num = 0;
	while (str[x] > 47 && str[x] < 58)
	{
		if (x == 0)
			num = str[x] - 48;
		else
			num = (num * 10) + str[x] - 48;
		x++;
	}
	return (num);
}

int		get_sign(char *str)
{
	int x;
	int sign;

	x = 0;
	sign = 1;
	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			sign = sign * -1;
		x++;
	}
	return (sign);
}

int		is_space(char c)
{
	if (c == '\t' || c == '\n' ||
	c == '\v' || c == '\f' ||
	c == '\r' || c == ' ')
		return (1);
	return (0);
}
