/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 22:25:31 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/25 15:57:30 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	print_tab(char **tab, int max);
int		ft_strlen(char *str);
void	sort_tab(char **tab, int max);
int		ft_strcmp(char *s1, char *s2);

int		main(int argc, char **argv)
{
	if (!argc)
		return (1);
	sort_tab(&argv[1], argc - 1);
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] && s2[x])
	{
		if ((s1[x]) > (s2[x]))
			return (1);
		else if ((s1[x]) < (s2[x]))
			return (-1);
		x++;
	}
	if (s1[x] && !s2[x])
		return (1);
	else if (!s1[x] && s2[x])
		return (-1);
	return (0);
}

void	sort_tab(char **tab, int max)
{
	int		x;
	char	*tmp;

	x = 0;
	while (x < max - 1)
	{
		if (ft_strcmp(tab[x], tab[x + 1]) == 1)
		{
			tmp = tab[x];
			tab[x] = tab[x + 1];
			tab[x + 1] = tmp;
			x = 0;
		}
		else
			x++;
	}
	print_tab(tab, max);
}

int		ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

void	print_tab(char **tab, int max)
{
	int x;
	int y;

	x = 0;
	while (x < max)
	{
		y = 0;
		while (tab[x][y])
		{
			write(1, &tab[x][y], 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}
