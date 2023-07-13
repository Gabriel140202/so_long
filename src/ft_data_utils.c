/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:49:32 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/13 10:52:31 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	ft_init_screen(t_program *program)
{
	program->mlx = mlx_init();
	program->win = mlx_new_window(program->mlx, 1920, 1080, "so_long");
	mlx_hook(program->win, 17, 1L << 5, x_press, &program);
	mlx_key_hook(program->win, key_hook, program);
	mlx_loop(program->mlx);
}
