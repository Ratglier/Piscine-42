/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:34:26 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/17 13:48:53 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lowercase(char c);
int		is_alphanum(char c);
int		is_uppercase(char c);

char	*ft_strcapitalize(char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		if (is_lowercase(str[x]))
		{
			if (!is_alphanum(str[x - 1]) || x == 0)
				str[x] = str[x] - 32;
		}
		if (is_uppercase(str[x]))
		{
			if (is_alphanum(str[x - 1]) && x != 0)
				str[x] = str[x] + 32;
		}
		x++;
	}
	return (str);
}

int		is_uppercase(char c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}

int		is_lowercase(char c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}

int		is_alphanum(char c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
