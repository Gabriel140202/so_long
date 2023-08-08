/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:08:56 by gfrancis          #+#    #+#             */
/*   Updated: 2023/08/08 15:59:24 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	move_w(t_program *program)
{
	int		x;
	int		y;
	char	**map;
	
	map = program->map.map;
	x = program->map.player.x;
	y = program->map.player.y;
	
	if (map[x][y] == 'P' && map[x - 1][y] == '0')
	{
		map[x - 1][y] = 'P';
		map[x][y] = '0';
	}
	else if (map[x][y] == 'P' && map[x - 1][y] == 'C')
	{
		map[x - 1][y] = 'P';
		map[x][y] = '0';
	}
	program->map.player.x--;
}

void	move_s(t_program *program)
{
	int		x;
	int		y;
	char	**map;
	
	map = program->map.map;
	x = program->map.player.x;
	y = program->map.player.y;
	
	if (map[x][y] == 'P' && map[x - 1][y] == '0')
	{
		map[x + 1][y] = 'P';
		map[x][y] = '0';
	}
	else if (map[x][y] == 'P' && map[x - 1][y] == 'C')
	{
		map[x + 1][y] = 'P';
		map[x][y] = '0';
	}
	program->map.player.x++;
}

void	move_a(t_program *program)
{
	int		x;
	int		y;
	char	**map;
	
	map = program->map.map;
	x = program->map.player.x;
	y = program->map.player.y;
	
	if (map[x][y] == 'P' && map[x][y - 1] == '0')
	{
		map[x][y - 1] = 'P';
		map[x][y] = '0';
	}
	else if (map[x][y] == 'P' && map[x][y - 1] == 'C')
	{
		map[x][y - 1] = 'P';
		map[x][y] = '0';
	}
	program->map.player.y--;
}

void	move_d(t_program *program)
{
	int		x;
	int		y;
	char	**map;
	
	map = program->map.map;
	x = program->map.player.x;
	y = program->map.player.y;
	
	if (map[x][y] == 'P' && map[x][y + 1] == '0')
	{
		map[x][y + 1] = 'P';
		map[x][y] = '0';
	}
	else if (map[x][y] == 'P' && map[x][y + 1] == 'C')
	{
		map[x][y + 1] = 'P';
		map[x][y] = '0';
	}
	program->map.player.y++;
}