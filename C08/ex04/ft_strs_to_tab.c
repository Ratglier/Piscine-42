/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 09:27:42 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/31 16:31:39 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

char				*ft_strdup(char *src)
{
	int		x;
	char	*dest;

	x = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char));
	if (dest == 0)
		return (0);
	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			x;
	t_stock_str *array;

	x = 0;
	if (!(array = malloc((ac + 1) * sizeof(t_stock_str))))
		return (NULL);
	while (x < ac)
	{
		array[x].size = ft_strlen(av[x]);
		array[x].str = av[x];
		array[x].copy = ft_strdup(av[x]);
		x++;
	}
	array[x].str = 0;
	return (array);
}
