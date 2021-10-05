/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtournet <rtournet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 07:14:06 by rtournet          #+#    #+#             */
/*   Updated: 2021/03/28 22:20:52 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alexandrie.h"

char **ft_split(char *str)
{
	int o;
	int g;
	int word;
	char  **splif;

	word = count_word(str);
	if (!(splif = malloc(sizeof(char *) * word + 1)))
		return (NULL);
	o = -1;
	while (++o < word)
	{
		while (*str && ft_charset(*str))
			str++;
		if (!(splif[o] = malloc(sizeof(char) * size_word(str) + 1 )))
			return (NULL);
		g = 0;
		while (*str && !ft_charset(*str))
			splif[o][g++] = *str++;
		splif[o][g] = 0;
	}
	splif[o] = 0;
	return (splif);
}

int		count_word(char *str)
{
	int state;
	int word;

	word = 0;
	state = 1;
	while (*str)
	{
		if (ft_charset(*str))
			state = 1;
		else
		{
			if (state == 1)
				word++;
			state = 0;
		}
		str++;
	}
	return (word);
}

int size_word(char *str)
{
	int size;

	while (*str && !ft_charset(*str))
	{
		str++;
		size++;
	}
	return (size);
}

int		ft_charset(char c)
{
	return (c == '\n');
}
