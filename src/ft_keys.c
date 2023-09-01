/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keys.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:21:41 by gfrancis          #+#    #+#             */
/*   Updated: 2023/09/01 14:21:16 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	is_valid_key(int keycode)
{
	if (keycode == KEY_A || keycode == KEY_D || keycode == KEY_ESC
		|| keycode == KEY_S || keycode == KEY_W)
		return (1);
	return (0);
}

void	change_img(int keycode, t_program *program)
{
	if (keycode == KEY_W)
		program->map.player.image = program->map.player.img_u;
	if (keycode == KEY_S)
		program->map.player.image = program->map.player.img_d;
	if (keycode == KEY_A)
		program->map.player.image = program->map.player.img_l;
	if (keycode == KEY_D)
		program->map.player.image = program->map.player.img_r;
}

int	key_hook(int keycode, t_program *program)
{
	if (is_valid_key(keycode))
	{
		if (program->map.player.flag++ == 0)
			mlx_destroy_image(program->mlx, program->map.player.image);
		change_img(keycode, program);
		if (keycode == KEY_ESC)
			ft_free_program(program);
		if (keycode == KEY_W)
			move(program, program->map.player.x, program->map.player.y - 1);
		if (keycode == KEY_S)
			move(program, program->map.player.x, program->map.player.y + 1);
		if (keycode == KEY_A)
			move(program, program->map.player.x - 1, program->map.player.y);
		if (keycode == KEY_D)
			move(program, program->map.player.x + 1, program->map.player.y);
	}
	return (0);
}
