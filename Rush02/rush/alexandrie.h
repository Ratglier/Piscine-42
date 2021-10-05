/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alexandrie.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtournet <rtournet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:25:46 by rtournet          #+#    #+#             */
/*   Updated: 2021/03/28 23:20:34 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALEXANDRIE_H
# define ALEXANDRIE_H

#include "dict.h"

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		maestro(char *number, char *dict_path);

void	search_for_number(t_dict *dict, char *number);
void	search_for_terminaison(t_dict *dict, int size);

int		ft_hundred(t_dict *dict, char c);
int		ft_dizaine(t_dict *dict, char c);
int		ft_unite(t_dict *dict, char c);
char	*casselescouilles(t_dict *dict, char c, char d);
void	chaisplus(t_dict *dict, char *str);

char	*file_to_string(char *file_name);
size_t	get_buff_size(char *filename);

t_dict	*string_to_list(char *str);
char	*get_key(char *str);
char	*get_value(char *str);
t_dict	*init_list(char *number, char *suffixe, t_dict *dict);

char	**ft_split(char *str);
int		count_word(char *str);
int		size_word(char *str);
int		ft_charset(char c);

char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
char	*ft_strdup(char *src);

void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
int		is_space(char c);
int		is_printable(char c);

#endif
