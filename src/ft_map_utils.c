/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:36:09 by gfrancis          #+#    #+#             */
/*   Updated: 2023/08/17 15:46:32 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	check_map_extension(char *extension, t_program *program)
{
	int	i;

	i = ft_strlen(extension);
	if (!(i > 2 && extension[i - 4] == '.' && extension[i - 3] == 'b' && 
			extension[i - 2] == 'e' && extension[i - 1] == 'r'))
		ft_error_program (program, 1);
}

void	check_first_last_line(char **map, int line, int size)
{
	int	i;

	i = 0;
	while ((map[line][i] && i <= size - 2))
	{
		if (map[line][i] == '1')
			i++;
		else 
			ft_error_map(map, 2);
	}
}

void	check_position(t_program *program, size_t x, size_t y)
{
	if (!ft_strchr("PCE10X", program->map.map2[y][x]))
		ft_error_map(program->map.map2, 4);
	if (program->map.map2[y][x] == 'P')
	{
		program->map.player.qtd++;
		program->map.player.x = x;
		program->map.player.y = y;
	}
	if (program->map.map2[y][x] == 'C')
		program->map.collectible.qtd++;
	if (program->map.map2[y][x] == 'E')
		program->map.exit.qtd++;
}

void	check_body(t_program *program, char **map, int x, int y)
{
	while (y < program->map.height)
	{
		if (map[y][0] != '1' || map[y][program->map.width - 2] != '1')
		{
			ft_error_map(program->map.map2, 2);
			ft_free_map(program->map.map);
		}
		while (x <= program->map.width - 2)
		{
			check_position(program, x, y);
			x++;
		}
		if (!(program->map.width == (int)ft_strlen(program->map.map2[y])))
			ft_error_map(program->map.map2, 4);
		x = 0;
		y++;
	}
	if (!(program->map.player.qtd == 1 && program->map.exit.qtd == 1 
			&& program->map.collectible.qtd >= 1))
	{
		ft_error_map(program->map.map2, 3);
		ft_free_map(program->map.map);
	}
}

void	check_map(int line, t_program *program, char **map)
{
	program->map.height = line;
	program->map.width = ft_strlen(map[0]);
	check_first_last_line(map, 0, program->map.width);
	check_first_last_line(map, line, program->map.width);
	check_body(program, map, 0, 1);
	fill_flood(program);
}
