/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:08:40 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/18 10:29:04 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	ft_data(char *path, t_program *program)
{
	check_map_extension(path, program);
	read_map(path, program);
	ft_putendl_fd("Lido com sucesso", 1);
	ft_init_screen(program);
	return (0);
}
