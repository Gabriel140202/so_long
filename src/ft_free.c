/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:18:52 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/07 11:56:35 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	ft_free_program(t_program *program)
{
	if(program)
		free(program);
	exit(0);
}

int	ft_free_map(char **map)
{
	if(map)
		free(map);
	return (0);
}