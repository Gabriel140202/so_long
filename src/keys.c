/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:21:41 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/07 11:52:29 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	key_hook(int keycode, t_program *program)
{
	(void)program; 
	if(keycode == 65307) {
		// mlx_destroy_window(program->mlx, program->win);
		exit(EXIT_FAILURE);
	}
	return (0);
}
