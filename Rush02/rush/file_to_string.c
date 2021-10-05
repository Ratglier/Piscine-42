/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntouazi <ntouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 21:15:56 by ntouazi           #+#    #+#             */
/*   Updated: 2021/03/28 23:17:26 by ntouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alexandrie.h"

char	*file_to_string(char *file_name)
{
	int fd;
	int buff_size;
	char *buffer;
	
	buff_size = get_buff_size(file_name);
	fd = open("./numbers.dict", O_RDONLY);
	buffer = malloc(buff_size * sizeof(char));
	read(fd, buffer, buff_size);
	buffer[buff_size] = '\0';
	return (buffer);
}

size_t		get_buff_size(char *filename)
{
	char	buffer[1];
	int		rd;
	int		count;
	int		fd;

	count = 0;
	rd = 1;
	fd = open(filename, O_RDONLY);
	while ((rd = read(fd, buffer, 1)))
		count++;
	close(fd);
	return (count);
}
