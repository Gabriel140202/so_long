/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keys.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:21:41 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/13 11:08:56 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	key_hook(int keycode, t_program *program)
{
	if (keycode == 65307) 
	{
		ft_free_map(program->map.map);
		mlx_destroy_window(program->mlx, program->win);
		mlx_destroy_display(program->mlx);
		mlx_loop_end(program->mlx);
		free(program->mlx);
		exit(0);
	}
	return (0);
}

int	x_press(t_program *program)
{	 
	ft_free_map(program->map.map);
	exit(0);
	mlx_destroy_window(program->mlx, program->win);
	mlx_destroy_display(program->mlx);
	mlx_loop_end(program->mlx);
	free(program->mlx);
	return (0);
}
