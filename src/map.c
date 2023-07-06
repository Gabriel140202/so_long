/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:09:48 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/06 11:06:29 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	check_map_extension(char *map_extension, s_program *program)
{
	int	i;

	i = ft_strlen(map_extension);
	if (i > 2 && map_extension[i - 4] == '.' && map_extension[i - 3] == 'b'&& map_extension[i - 2] == 'e' && map_extension[i - 1] == 'r')
		ft_putstr_fd("Extensao correta", 1);
	else
	ft_error(program, 1);
}
