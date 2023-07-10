/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:18:52 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/10 12:59:59 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void ft_free_program(t_program *program)
{
	if(program)
		free(program);
	exit(0);
}

void ft_free_map(char **map)
{
	if(map)
		free(map);
	exit(0);
}
