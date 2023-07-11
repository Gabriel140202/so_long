/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:36:09 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/11 12:36:37 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	check_map_extension(char *map_extension, t_program *program)
{
	int	i;

	i = ft_strlen(map_extension);
	if (i > 2 && map_extension[i - 4] == '.' && map_extension[i - 3] == 'b'&& map_extension[i - 2] == 'e' && map_extension[i - 1] == 'r');
	else
		ft_error_program (program, 1);
}

//excluir dps
void	ft_print_list(t_list *lista) {
	while (lista) {
		ft_putstr_fd(lista->content, 1);
		lista = lista->next;
	}
}

void	check_first_last_line(char **map, int line, int size)
{
	int	i;

	i = 0;
	while ((map[line][i] && i <= size - 2))
	{
		if (map[line][i] == '1')
		{
			i++;
		}
		else 
			ft_error_map(map, 2);
	}
}

void	check_body(t_program *program)
{
	size_t			x;
	size_t			y;

	y = 1;
	x = 0;
	while (y < program->map.height)
	{
		if (program->map.map[y][0] != '1' || program->map.map[y][program->map.width - 2] != '1')
			ft_error_map(program->map.map, 2);
		while (x <= program->map.width - 2)
		{
			if (program->map.map[y][x] == 'P')
				program->map.player++;
			if (program->map.map[y][x] == 'C')
				program->map.collectible++;
			if (program->map.map[y][x] == 'E')
				program->map.exit++;
			x++;
		}
		if (!(program->map.width == ft_strlen(program->map.map[y])))
			ft_error_map(program->map.map, 4);
		x = 0;
		y++;
	}
	if (!(program->map.player == 1 && program->map.exit == 1 && program->map.collectible >= 1))
		ft_error_map(program->map.map, 3);
}

void	check_map(int line, t_program *program)
{
	program->map.height = line;
	program->map.width = ft_strlen(program->map.map[0]);
	check_first_last_line(program->map.map, 0, program->map.width);
	check_first_last_line(program->map.map, line, program->map.width);
	check_body(program);
}
