/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:46:13 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/05 15:52:53 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int main(int argc, char **argv)
{
	s_program	*program;
	(void)argv;
	if (argc != 2)
	{
		write(1, "Numero de argumentos invalido.\n", 31);
		return (0);
	}
	program = ft_calloc(1, sizeof(s_program));
	if (!program)
		return (0);
	program->mlx = mlx_init();
	program->win = mlx_new_window(program->mlx, 1920, 1080, "so_long");
	mlx_key_hook(program->win, key_hook, &program);
	mlx_loop(program->mlx);
}