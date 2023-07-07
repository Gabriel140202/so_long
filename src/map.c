/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:09:48 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/07 15:17:59 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	check_map_extension(char *map_extension, t_program *program)
{
	int	i;

	i = ft_strlen(map_extension);
	if (i > 2 && map_extension[i - 4] == '.' && map_extension[i - 3] == 'b'&& map_extension[i - 2] == 'e' && map_extension[i - 1] == 'r');
	else
	ft_error_program(program, 1);
}

char **read_map(char *path, t_program *program)
{
	int				fd;
	int				index;
	char			**map;
	t_list			*content;
	char 			*line;
	
	index = 0;
	content = NULL;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		ft_error_program(program, 0);
	line = get_next_line(fd);
	while (line != NULL) {
    	ft_lstadd_back(&content, ft_lstnew(line));
		line = get_next_line(fd);
	}
	map = create_matrix(content, ft_lstsize(content));
	//ft_print_list(content);
	//continuar check_map
	check_map(map, ft_lstsize(content) - 1);
	ft_lstclear(&content, free);
	close(fd);
	return (map);
}
