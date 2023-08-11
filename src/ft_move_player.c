/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:08:56 by gfrancis          #+#    #+#             */
/*   Updated: 2023/08/11 17:35:23 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	ft_player_action(t_program *program)
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
	else if (map[y][x] == 'X')
	{
		ft_putendl_fd("You lose, Sorry!!!!!", 2);
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
	if (map[y][x] == 'P' && !(map[y - 1][x] == '1'))
	{
		program->map.player.y--;
		program->map.player.steps++;
		if(map[y - 1][x] == 'C')
			program->map.collectible.qtd--;
		if(map[y - 1][x] == 'E' || map[y - 1][x] == 'X')
			ft_player_action(program);
		map[y - 1][x] = 'P';
		map[y][x] = '0';
	}
	reset_img(program);
}

void	move_s(t_program *program)
{
	int		x;
	int		y;
	char	**map;
	
	map = program->map.map;
	x = program->map.player.x;
	y = program->map.player.y;
	if (map[y][x] == 'P' && !(map[y + 1][x] == '1'))
	{
		program->map.player.y++;
		program->map.player.steps++;
		if(map[y + 1][x] == 'C')
			program->map.collectible.qtd--;
		if(map[y + 1][x] == 'E' || map[y + 1][x] == 'X')
			ft_player_action(program);
		map[y + 1][x] = 'P';
		map[y][x] = '0';
	}
	reset_img(program);
}


void	move_a(t_program *program)
{
	int		x;
	int		y;
	char	**map;
	
	map = program->map.map;
	x = program->map.player.x;
	y = program->map.player.y;
	if (map[y][x] == 'P' && !(map[y][x - 1] == '1'))
	{
		program->map.player.x--;
		program->map.player.steps++;
		if(map[y][x - 1] == 'C')
			program->map.collectible.qtd--;
		if(map[y][x - 1] == 'E' || map[y][x - 1] == 'X')
			ft_player_action(program);
		map[y][x - 1] = 'P';
		map[y][x] = '0';
	}
	reset_img(program);
}

void	move_d(t_program *program)
{
	int		x;
	int		y;
	char	**map;
	
	map = program->map.map;
	x = program->map.player.x;
	y = program->map.player.y;
	if (map[y][x] == 'P' && !(map[y][x + 1] == '1'))
	{
		program->map.player.x++;
		program->map.player.steps++;
		if(map[y][x + 1] == 'C')
			program->map.collectible.qtd--;
		if(map[y][x + 1] == 'E' || map[y][x + 1] == 'X')
			ft_player_action(program);
		map[y][x + 1] = 'P';
		map[y][x] = '0';
	}
	reset_img(program);
}