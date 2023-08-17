/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keys.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:21:41 by gfrancis          #+#    #+#             */
/*   Updated: 2023/08/17 15:21:53 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	*init_player_img(t_program *program, int keycode)
{
	void	*img;

	if (keycode == KEY_W)
		img = mlx_xpm_file_to_image(program->mlx,
				PLAYER_UP, &program->map.width, &program->map.height);
	if (keycode == KEY_S)
		img = mlx_xpm_file_to_image(program->mlx,
				PLAYER_DOWN, &program->map.width, &program->map.height);
	if (keycode == KEY_A)
		img = mlx_xpm_file_to_image(program->mlx,
				PLAYER_LEFT, &program->map.width, &program->map.height);
	if (keycode == KEY_D)
		img = mlx_xpm_file_to_image(program->mlx,
				PLAYER_RIGHT, &program->map.width, &program->map.height);
	return (img);
}

int	key_hook(int keycode, t_program *program)
{
	if (keycode == KEY_ESC)
		ft_free_program(program);
	if (keycode == KEY_W)
	{
		program->map.player.image = init_player_img(program, KEY_W);
		move(program, program->map.player.x, program->map.player.y - 1);
	}
	if (keycode == KEY_S)
	{
		program->map.player.image = init_player_img(program, KEY_S);
		move(program, program->map.player.x, program->map.player.y + 1);
	}
	if (keycode == KEY_A)
	{
		program->map.player.image = init_player_img(program, KEY_A);
		move(program, program->map.player.x - 1, program->map.player.y);
	}
	if (keycode == KEY_D)
	{
		program->map.player.image = init_player_img(program, KEY_D);
		move(program, program->map.player.x + 1, program->map.player.y);
	}
	return (0);
}
