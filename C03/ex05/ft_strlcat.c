/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 09:48:51 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/24 09:13:31 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int x;
	unsigned int y;
	unsigned int total_length;

	x = 0;
	y = 0;
	if ((unsigned int)ft_strlen(dest) > size)
		total_length = (unsigned int)(ft_strlen(src) + size);
	else
		total_length = (unsigned int)(ft_strlen(dest) + ft_strlen(src));
	while (dest[x])
		x++;
	while (src[y] && x + 1 < size)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (total_length);
}

int				ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}
