/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:49:32 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/18 14:27:44 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	ft_init_screen(t_program *program)
{
	program->mlx = mlx_init();
	program->win = mlx_new_window(program->mlx, ((program->map.height - 1) * 64),
					((program->map.width) * 64), "so_long");
	
	//make_window(program->map.map, program);
	mlx_hook(program->win, 17, 1L << 5, x_press, program);
	mlx_key_hook(program->win, key_hook, program);
	mlx_loop(program->mlx);
}
