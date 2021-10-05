/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 08:35:32 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/18 09:44:48 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
int		case_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strstr(char *str, char *to_find)
{
	int				x;
	int				y;
	unsigned int	to_find_length;

	x = 0;
	y = 0;
	to_find_length = ft_strlen(to_find);
	if (to_find_length == 0)
		return (&str[x]);
	while (str[x])
	{
		if (case_strncmp(&str[x], to_find, to_find_length) == 0)
			return (&str[x]);
		x++;
	}
	return (0);
}

int		case_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n && (s1[x] && s2[x]))
	{
		if (s1[x] > s2[x])
			return (1);
		else if (s1[x] < s2[x])
			return (-1);
		x++;
	}
	if (s1[x] && !s2[x] && x < n)
		return (1);
	else if (!s1[x] && s2[x] && x < n)
		return (-1);
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
