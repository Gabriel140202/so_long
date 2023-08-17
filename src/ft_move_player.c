/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:08:56 by gfrancis          #+#    #+#             */
/*   Updated: 2023/08/17 15:23:07 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	ft_player_action(t_program *program, char *msg)
{
	ft_putendl_fd(msg, 2);
	ft_free_program(program);
}

void	move(t_program *program, int x, int y)
{
	char	**map;

	map = program->map.map;
	if (map[y][x] != '1' && (map[y][x] != 'E' || !program->map.collectible.qtd))
	{
		program->map.player.steps++;
		if (map[y][x] == 'C')
			program->map.collectible.qtd--;
		if (map[y][x] == 'E')
			ft_player_action(program, "You Win, Congratulations!!!!!");
		if (map[y][x] == 'X')
			ft_player_action(program, "You lose, Sorry!!!!!");
		map[y][x] = 'P';
		map[program->map.player.y][program->map.player.x] = '0';
		program->map.player.x = x;
		program->map.player.y = y;
	}
	reset_img(program);
}
