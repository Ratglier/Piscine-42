/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:13:02 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/14 16:22:32 by ifilip           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char *pattern)
{
	int pos;

	pos = 0;
	while (pos < x)
	{
		if (pos == 0)
			ft_putchar(pattern[0]);
		else if (pos == x - 1)
			ft_putchar(pattern[2]);
		else
			ft_putchar(pattern[1]);
		pos++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int line;

	line = 0;
	if (x > 0 && y > 0)
	{
		while (line < y)
		{
			if (line == 0)
				print_line(x, "ABA");
			else if (line == y - 1)
				print_line(x, "CBC");
			else
				print_line(x, "B B");
			line++;
		}
	}
}
