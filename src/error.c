/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:13:42 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/10 12:59:08 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void ft_error_program(t_program *program, int erro)
{
	if(erro == 0)
		ft_putstr_fd("Mensagem de erro padrao\n", 1);
	if(erro == 1)
		ft_putstr_fd("Wrong map extension\n", 1);
	ft_free_program(program);
}

void ft_error_map(char **map, int erro)
{
	if(erro == 0)
		ft_putstr_fd("Mensagem de erro padrao\n", 1);
	if(erro == 1)
		ft_putstr_fd("Map not created\n", 1);
	if(erro == 2)
		ft_putstr_fd("Wrong walls at the map\n", 1);
	if(erro == 3)
		ft_putstr_fd("Do not satisfied thue rules of the map\n", 1);
	if(erro == 4)
		ft_putstr_fd("Invalid map\n", 1);
	ft_free_map (map);
}
