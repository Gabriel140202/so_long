/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:08:56 by gfrancis          #+#    #+#             */
/*   Updated: 2023/08/11 15:59:01 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	ft_player_exit(t_program *program)
{	
	int		x;
	int		y;
	char	**map;
	
	map = program->map.map;
	x = program->map.player.x;
	y = program->map.player.y;
	if (map[y][x] == 'E' && program->map.collectible.qtd == 0)
	{
		ft_putendl_fd("You Win, Congratulations!!!!!", 2);
		ft_free_program(program);
	}
}

void	move_w(t_program *program)
{
	int		x;
	int		y;
	char	**map;
	
	map = program->map.map;
	x = program->map.player.x;
	y = program->map.player.y;
	if (map[y][x] == 'P' && map[y - 1][x] == '0')
	{
		map[y - 1][x] = 'P';
		map[y][x] = '0';
		program->map.player.y--;
		program->map.player.steps++;
		reset_img(program);
	}
	else if (map[y][x] == 'P' && map[y - 1][x] == 'C')
	{
		map[y - 1][x] = 'P';
		map[y][x] = '0';
		program->map.player.y--;
		program->map.player.steps++;
		program->map.collectible.qtd--;
		reset_img(program);
	}
	else if (map[y][x] == 'P' && map[y -1][x] == 'E')
	{
		program->map.player.y--;
		program->map.player.steps++;
		ft_player_exit(program);
	}
}

void	move_s(t_program *program)
{
	int		x;
	int		y;
	char	**map;
	
	map = program->map.map;
	x = program->map.player.x;
	y = program->map.player.y;
	
	if (map[y][x] == 'P' && map[y + 1][x] == '0')
	{
		map[y + 1][x] = 'P';
		map[y][x] = '0';
		program->map.player.y++;
		program->map.player.steps++;
		reset_img(program);
	}
	else if (map[y][x] == 'P' && map[y + 1][x] == 'C')
	{
		map[y + 1][x] = 'P';
		map[y][x] = '0';
		program->map.player.y++;
		program->map.player.steps++;
		program->map.collectible.qtd--;
		reset_img(program);
	}
	else if (map[y][x] == 'P' && map[y + 1][x] == 'E')
	{
		program->map.player.y++;
		program->map.player.steps++;
		ft_player_exit(program);
	}
}


void	move_a(t_program *program)
{
	int		x;
	int		y;
	char	**map;
	
	map = program->map.map;
	x = program->map.player.x;
	y = program->map.player.y;
	
	if (map[y][x] == 'P' && map[y][x - 1] == '0')
	{
		map[y][x - 1] = 'P';
		map[y][x] = '0';
		program->map.player.x--;
		program->map.player.steps++;
		reset_img(program);
	}
	else if (map[y][x] == 'P' && map[y][x - 1] == 'C')
	{
		map[y][x - 1] = 'P';
		map[y][x] = '0';
		program->map.player.x--;
		program->map.player.steps++;
		program->map.collectible.qtd--;
		reset_img(program);
	}
	else if (map[y][x] == 'P' && map[y][x - 1] == 'E')
	{
		program->map.player.x--;
		program->map.player.steps++;
		ft_player_exit(program);
	}
}

void	move_d(t_program *program)
{
	int		x;
	int		y;
	char	**map;
	
	map = program->map.map;
	x = program->map.player.x;
	y = program->map.player.y;
	
	if (map[y][x] == 'P' && map[y][x + 1] == '0')
	{
		map[y][x + 1] = 'P';
		map[y][x] = '0';
		program->map.player.x++;
		program->map.player.steps++;
		reset_img(program);
	}
	else if (map[y][x] == 'P' && map[y][x + 1] == 'C')
	{
		map[y][x + 1] = 'P';
		map[y][x] = '0';
		program->map.player.x++;
		program->map.player.steps++;
		program->map.collectible.qtd--;
		reset_img(program);
	}
	else if (map[y][x] == 'P' && map[y][x + 1] == 'E')
	{
		program->map.player.x++;
		program->map.player.steps++;
		ft_player_exit(program);
	}
}