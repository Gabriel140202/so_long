/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keys.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:21:41 by gfrancis          #+#    #+#             */
/*   Updated: 2023/08/31 11:43:36 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	is_valid_key(keycode)
{
	if (keycode == KEY_A || keycode == KEY_D || keycode == KEY_ESC || keycode == KEY_S || keycode == KEY_W)
		return (1);
	return(0);	
}

int	key_hook(int keycode, t_program *program)
{
	if (is_valid_key(keycode))
	{
		if(program->map.player.flag++ == 0)
			mlx_destroy_image(program->mlx, program->map.player.image);
		if (keycode == KEY_ESC)
			ft_free_program(program);
		if (keycode == KEY_W)
		{
			program->map.player.image = program->map.player.img_u;
			move(program, program->map.player.x, program->map.player.y - 1);
		}
		if (keycode == KEY_S)
		{
			program->map.player.image = program->map.player.img_d;
			move(program, program->map.player.x, program->map.player.y + 1);
		}
		if (keycode == KEY_A)
		{
			program->map.player.image = program->map.player.img_l;
			move(program, program->map.player.x - 1, program->map.player.y);
		}
		if (keycode == KEY_D)
		{
			program->map.player.image = program->map.player.img_r;
			move(program, program->map.player.x + 1, program->map.player.y);
		}
	}
	return (0);
}
