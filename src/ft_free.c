/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:18:52 by gfrancis          #+#    #+#             */
/*   Updated: 2023/09/01 14:22:33 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	ft_free_map(char **map)
{
	int	i;

	i = -1;
	if (map)
	{
		while (map[++i])
			free(map[i]);
		free(map);
	}
}

void	ft_free_img(t_program *program)
{
	mlx_destroy_image(program->mlx, program->map.collectible.image);
	if (program->map.exit.flag == 0)
		mlx_destroy_image(program->mlx, program->map.exit.image);
	mlx_destroy_image(program->mlx, program->map.exit.image_open);
	mlx_destroy_image(program->mlx, program->map.ground);
	mlx_destroy_image(program->mlx, program->map.wall);
	mlx_destroy_image(program->mlx, program->map.enemy);
	mlx_destroy_image(program->mlx, program->map.player.img_d);
	mlx_destroy_image(program->mlx, program->map.player.img_u);
	mlx_destroy_image(program->mlx, program->map.player.img_l);
	mlx_destroy_image(program->mlx, program->map.player.img_r);
}

int	ft_free_program(t_program *program)
{
	if (program->map.player.flag == 0)
		mlx_destroy_image(program->mlx, program->map.player.image);
	ft_free_map(program->map.map);
	ft_free_img(program);
	mlx_destroy_window(program->mlx, program->win);
	mlx_destroy_display(program->mlx);
	mlx_loop_end(program->mlx);
	free(program->mlx);
	free(program);
	exit(0);
}
