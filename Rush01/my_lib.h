/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 15:45:22 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/21 23:34:42 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MY_LIB_H
#define	MY_LIB_H

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		error_found(void);

void	print_array(int **array, int dimension);
int		**init_array(int dimension);

int		get_size(int nb);
int		check_params(char *str);
int		**parse_parameters(char *str, int dimension);
int		check_max(int **clues, int max);
int		check_opposite(int **clue, int max);

int		**fill_obvious(int **array, int **clues, int max);
int		**fill_obvious_up(int **array, int *clues, int max);
int		**fill_obvious_down(int **array, int *clues, int max);
int		**fill_obvious_left(int **array, int *clues, int max);
int		**fill_obvious_right(int **array, int *clues, int max);

int		**search_last_line(int **array, int max);
int		**search_last_row(int **array, int max);
int		*fill_last(int max, int *line);

int		**allocate_memory(int line, int row);
void	free_memory(int **array, int line);

int		skyscrapper_solver(int **grid, int row, int col, int max);
int		is_valid(int **grid, int row, int col, int max);
int		skyscrapper_helper(int **grid, int row, int col, int max);

int		launch_backtracking(int **array, int max);
int 	boucle(int **grid, int max);
#endif
