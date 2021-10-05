/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 04:34:17 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/28 21:26:51 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alexandrie.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int index;

	index = 0;
	while (s1[index] && s2[index])
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		is_space(char c)
{
	if (c == '\t' || c == '\n' ||
	c == '\v' || c == '\f' ||
	c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		is_printable(char c)
{
	if (c < 32 && c > 126)
		return (0);
	return (1);
}
