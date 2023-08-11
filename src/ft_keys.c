/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keys.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:21:41 by gfrancis          #+#    #+#             */
/*   Updated: 2023/08/11 16:10:18 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	key_hook(int keycode, t_program *program)
{
	if (keycode == KEY_ESC) 
		ft_free_program(program);
	if (keycode == KEY_W)
		move_w(program);
	if (keycode == KEY_S)
		move_s(program);
	if (keycode == KEY_A)
		move_a(program);
	if (keycode == KEY_D)
		move_d(program);
	return (0);
}
