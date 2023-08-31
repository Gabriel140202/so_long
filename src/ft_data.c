/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:08:40 by gfrancis          #+#    #+#             */
/*   Updated: 2023/08/31 15:09:52 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	ft_init_screen(t_program *program)
{
	program->mlx = mlx_init();
	program->win = mlx_new_window(program->mlx, ((program->map.width - 1) * 64),
			((program->map.height + 1) * 64), "so_long");
	mlx_hook(program->win, 17, 1L << 5, ft_free_program, program);
	mlx_key_hook(program->win, key_hook, program);
	make_window(program);
}

int	ft_data(char *path, t_program *program)
{
	program->map.player.qtd = 0;
	program->map.exit.qtd = 0;
	program->map.collectible.qtd = 0;
	program->map.player.steps = 0;
	program->map.player.flag = 0;
	program->map.exit.flag = 0;
	check_map_extension(path, program);
	read_map(path, program);
	ft_putendl_fd("Lido com sucesso", 1);
	ft_init_screen(program);
	return (0);
}
