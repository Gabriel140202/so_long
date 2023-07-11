/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:08:40 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/11 14:12:40 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	print_matrix(char **map) 
{
	for (int i = 0; map[i]; i++)
		ft_putendl_fd(map[i], 1);
}

int	ft_data(char *path, t_program *program)
{
	check_map_extension(path, program);
	read_map(path, program);
	ft_putendl_fd("Lido com sucesso", 1);
	return (0);
}
