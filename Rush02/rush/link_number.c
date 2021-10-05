/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtournet <rtournet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 15:37:04 by rtournet          #+#    #+#             */
/*   Updated: 2021/03/28 23:24:45 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alexandrie.h"

int		ft_hundred(t_dict *dict, char c)
{
	char	*str;

	if (!(str = malloc(sizeof(char) * 4)))
		return (0);
	str[0] = c;
	str[1] = '0';
	str[2] = '0';
	str[4] = 0;
	search_for_number(dict, str);
	return (0);
}

int		ft_dizaine(t_dict *dict, char c)
{
	char	*str;

	if (!(str = malloc(sizeof(char) * 3)))
		return (0);
	str[0] = c;
	str[1] = '0';
	str[2] = 0;
	search_for_number(dict, str);
	return (0);
}

int		ft_unite(t_dict *dict, char c)
{
	char	*str;

	if (!(str = malloc(sizeof(char) * 2)))
		return (0);
	str[0] = c;
	str[1] = 0;
	search_for_number(dict, str);
	return (0);
}

char	*casselescouilles(t_dict *dict, char c, char d)
{
	char *str;

	if (c == '1' && (d >= '0' && d <= '9'))
	{
		if (!(str = malloc(sizeof(char) * 3)))
			return (NULL);
		str[0] = c;
		str[1] = d;
		str[2] = 0;
	}
	search_for_number(dict, str);
	return (str);
}

void	chaisplus(t_dict *dict, char *str)
{
	int len;
	int i;

	i = 0;
	len = ft_strlen(str);
	while (str[i])
	{
		if (len % 3 == 0)
			ft_hundred(dict, str[i]);

		else if (len % 3 == 2 && (len - 1) % 3 == 1
				&& str[i] == '1' && (str[i + 1] <= '9'
					&& str[i + 1] >= '0'))
		{
			casselescouilles(dict, str[i], str[i + 1]);
			i++;
			len--;
		}
		else if (len % 3 == 2)
			ft_dizaine(dict, str[i]);
		else if (len % 3 == 1)
			ft_unite(dict, str[i]);
		i++;
		len--;
	}
}
