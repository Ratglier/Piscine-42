/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_in_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 21:13:02 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/28 23:31:16 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alexandrie.h"

void	search_for_number(t_dict *dict, char *number)
{
	t_dict *searcher;

	searcher = dict;
	while (searcher != NULL)
	{
		if (ft_strlen(number) == 3)
		{
			if (searcher->number_size == 1 && number[0] == searcher->number[0])
			{
				ft_putstr(searcher->suffixe);
				ft_putstr(" hundred");
			}
		}
		else if (ft_strlen(number) == 2)
		{
			if (number[0] == 1 && ft_strcmp(number, searcher->number) == 0)
				ft_putstr(searcher->suffixe);
		}
		else
		{
			if (number[0] == searcher->number[0])
				ft_putstr(ft_strcat(" ", searcher->suffixe));
		}
		searcher = searcher->next;
	}
}

void	search_for_terminaison(t_dict *dict, int size)
{
	t_dict *searcher;
	
	searcher = dict;
	while (searcher != NULL)
	{
		if(size == searcher->number_size)
			ft_putstr(searcher->suffixe);
		searcher = searcher->next;
	}
}
