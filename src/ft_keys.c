/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keys.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:21:41 by gfrancis          #+#    #+#             */
/*   Updated: 2023/08/17 11:45:03 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	key_hook(int keycode, t_program *program)
{
	if (keycode == KEY_ESC)
		ft_free_program(program);
	if (keycode == KEY_W)
	{
		program->map.player.image = mlx_xpm_file_to_image(program->mlx, PLAYER_UP, &program->map.width, &program->map.height);
		move(program, program->map.player.x, program->map.player.y - 1);
	}
	if (keycode == KEY_S)
	{
		program->map.player.image = mlx_xpm_file_to_image(program->mlx, PLAYER_DOWN, &program->map.width, &program->map.height);
		move(program, program->map.player.x, program->map.player.y + 1);
	}
	if (keycode == KEY_A)
	{
		program->map.player.image = mlx_xpm_file_to_image(program->mlx, PLAYER_LEFT, &program->map.width, &program->map.height);
		move(program, program->map.player.x - 1, program->map.player.y);
	}
	if (keycode == KEY_D)
	{
		program->map.player.image = mlx_xpm_file_to_image(program->mlx, PLAYER_RIGHT, &program->map.width, &program->map.height);
		move(program, program->map.player.x + 1, program->map.player.y);
	}
	return (0);
}
