/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:13:42 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/07 11:56:28 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void ft_error_program(t_program *program, int erro)
{
	(void)program;
	ft_putstr_fd("INVALID\n", 1);
	if(erro == 0)
		ft_putstr_fd("Mensagem de erro padrao\n", 1);
	if(erro == 1)
		ft_putstr_fd("Wrong map extension\n", 1);
	ft_free_program(program);
}

void ft_error_map(char **map, int erro)
{
	ft_putstr_fd("INVALID\n", 1);
	if(erro == 0)
		ft_putstr_fd("Mensagem de erro padrao\n", 1);
	if(erro == 1)
		ft_putstr_fd("Map not created\n", 1);
	if(erro == 2)
		ft_putstr_fd("Wrong walls at the map\n", 1);
	ft_free_map (map);
}
