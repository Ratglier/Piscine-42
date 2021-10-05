/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 14:45:33 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/22 11:44:47 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n && (s1[x] && s2[x]))
	{
		if ((s1[x]) > (s2[x]))
			return (s1[x] - s2[x]);
		else if ((s1[x]) < (s2[x]))
			return (s1[x] - s2[x]);
		x++;
	}
	if (s1[x] && !s2[x] && x < n)
		return (1);
	else if (!s1[x] && s2[x] && x < n)
		return (-1);
	return (0);
}
