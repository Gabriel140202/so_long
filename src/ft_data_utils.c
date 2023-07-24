/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:49:32 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/24 14:43:11 by gfrancis         ###   ########.fr       */
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
