/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:18:52 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/18 17:28:18 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	ft_free_program(t_program *program)
{
	if (program)
		free(program);
	exit(0);
}

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
}