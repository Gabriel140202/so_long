/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keys.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:21:41 by gfrancis          #+#    #+#             */
/*   Updated: 2023/08/11 18:32:55 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	key_hook(int keycode, t_program *program)
{
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
	return (0);
}
