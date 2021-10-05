/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:35:28 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/30 09:27:28 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_full_size(char **strs, char *sep, int max);
char	*ft_strcat(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		str_size;
	int		x;
	char	*dest;

	if (size == 0)
	{
		dest = malloc(sizeof(char));
		*dest = 0;
		return (dest);
	}
	str_size = get_full_size(strs, sep, size);
	dest = malloc((str_size) * sizeof(char));
	if (!dest)
		return (0);
	x = 0;
	while (x < size)
	{
		dest = ft_strcat(dest, strs[x]);
		dest = ft_strcat(dest, sep);
		x++;
	}
	dest[str_size - 1] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (dest[x])
		x++;
	while (src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

int		get_full_size(char **strs, char *sep, int max)
{
	int x;
	int y;
	int size;

	x = 0;
	size = 0;
	while (x < max)
	{
		y = 0;
		while (strs[x][y])
		{
			size++;
			y++;
		}
		x++;
	}
	y = 0;
	while (sep[y])
		y++;
	size += (x - 1) * (y);
	return (size + 1);
}
