/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 21:47:27 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/28 23:27:56 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alexandrie.h"

int		main(int argc, char **argv)
{
	char *dict_path;
	char *number;
	
	if (argc == 3)
	{
		dict_path = ft_strdup(argv[1]);
		number = ft_strdup(argv[2]);
	}
	else if (argc == 2)
	{
		dict_path = "./numbers.dict";
		number = ft_strdup(argv[1]);
	}
	else
	{
		ft_putstr("Error\n");
		return (1);
	}
	maestro(number, dict_path);
	return (0);
}

int		maestro(char *number, char *dict_path)
{
	char *file_in_string;
	t_dict *dict;
	
	file_in_string = file_to_string(dict_path);
	if (!file_in_string)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	dict = string_to_list(file_in_string);
	if (dict == NULL)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	chaisplus(dict, number);
	return (0);
}
