/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:18:52 by gfrancis          #+#    #+#             */
/*   Updated: 2023/08/11 17:41:48 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	ft_free_map(char **map)
{
	if (map)
	{
		int i;
		
		i = -1;
		while (map[++i])
			free(map[i]);
		free(map);
	}
}

void	ft_free_img(t_program *program)
{
	mlx_destroy_image(program->mlx, program->map.collectible.image);
	mlx_destroy_image(program->mlx, program->map.exit.image);
	mlx_destroy_image(program->mlx, program->map.ground);
	mlx_destroy_image(program->mlx, program->map.player.image);
	mlx_destroy_image(program->mlx, program->map.wall);
	mlx_destroy_image(program->mlx,	program->map.enemy);
}

int	ft_free_program(t_program *program)
{
	ft_free_map(program->map.map);
	ft_free_img(program);
	mlx_destroy_window(program->mlx, program->win);
	mlx_destroy_display(program->mlx);
	mlx_loop_end(program->mlx);
	free(program->mlx);
	free(program);
	exit(0);
}
