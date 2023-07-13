/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:41:06 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/13 10:59:45 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	flood_fill(int x, int y, int *flag, t_program *program)
{
	char	**tmp;

	tmp = program->map.map2;
	if (tmp[y][x] == '1' || tmp[y][x] == 'P' || tmp[y][x] == 'D')
		return ;
	else if (tmp[y][x] == '0')
		tmp[y][x] = 'P';
	else if (tmp [y][x] == 'C')
		tmp[y][x] = 'D';
	else if (tmp[y][x] == 'E')
	{
		(*flag)++;
		tmp[y][x] = 'E';
	}
	flood_fill(x + 1, y, flag, program);
	flood_fill(x - 1, y, flag, program);
	flood_fill(x, y + 1, flag, program);
	flood_fill(x, y - 1, flag, program);
}

int	check_collec(char **map)
{
	int	x;
	int	y;

	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x])
		{
			if (map[y][x] == 'C')
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}

int	fill_flood(t_program *program)
{
	int			flag;
	int			x;
	int			y;	

	x = program->map.player.x;
	y = program->map.player.y;
	flag = 0;
	flood_fill(x + 1, y, &flag, program);
	flood_fill(x - 1, y, &flag, program);
	flood_fill(x, y + 1, &flag, program);
	flood_fill(x, y - 1, &flag, program);
	if (flag == 0 || !check_collec(program->map.map2))
	{
		ft_error_map(program->map.map, 5);
	}
	ft_free_map(program->map.map2);
	return (0);
}
