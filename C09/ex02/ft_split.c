/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:42:41 by ntouazi           #+#    #+#             */
/*   Updated: 2021/04/01 14:58:55 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_word_count(char *str, char *charset);
int		is_sep(char c, char *charset);
char	*alloc_array(char *str, char *charset);
int		ft_strlen(char *str);

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		word_count;
	int		x;
	int		y;

	word_count = get_word_count(str, charset);
	if (!(array = malloc((word_count + 1) * sizeof(char *))))
		return (0);
	x = 0;
	y = 0;
	while (y < word_count)
	{
		while (is_sep(str[x], charset))
			x++;
		array[y] = alloc_array(&str[x], charset);
		x += ft_strlen(array[y]);
		y++;
	}
	array[y] = 0;
	return (array);
}

char	*alloc_array(char *str, char *charset)
{
	int		x;
	char	*word;

	x = 0;
	while (str[x] && !is_sep(str[x], charset))
		x++;
	if (!(word = malloc(x + 1 * sizeof(char))))
		return (0);
	x = 0;
	while (str[x] && !is_sep(str[x], charset))
	{
		word[x] = str[x];
		x++;
	}
	word[x] = '\0';
	return (word);
}

int		get_word_count(char *str, char *charset)
{
	int x;
	int count;

	x = 0;
	count = 0;
	while (is_sep(str[x], charset))
		x++;
	while (str[x])
	{
		if (is_sep(str[x - 1], charset) && !is_sep(str[x], charset))
			count++;
		x++;
	}
	if (!charset[0] && str[0])
		count += 1;
	return (count);
}

int		is_sep(char c, char *charset)
{
	int x;

	x = 0;
	while (charset[x])
	{
		if ((c == charset[x]) || (c == '\0'))
			return (1);
		x++;
	}
	return (0);
}

int		ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}
