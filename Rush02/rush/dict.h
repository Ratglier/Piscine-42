/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:33:15 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/28 23:21:11 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __dict_h__
# define	__dict_h__

typedef struct	s_dict t_dict;

struct	s_dict
{
	char *number;
	char *suffixe;
	int number_size;
	int suffixe_size;
	t_dict *next;
};

#endif
