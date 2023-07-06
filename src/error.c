/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:13:42 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/06 11:24:34 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void ft_error(s_program *program, int erro)
{
	(void)program;
	ft_putstr_fd("INVALID\n", 1);
	if(erro == 1)
		ft_putstr_fd("Wrong map extension\n", 1);
	ft_free(program);
}
