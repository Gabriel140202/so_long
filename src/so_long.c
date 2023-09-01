/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:46:13 by gfrancis          #+#    #+#             */
/*   Updated: 2023/09/01 14:25:52 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	main(int argc, char **argv)
{
	t_program	*program;

	if (argc != 2)
	{
		write(1, "Invalid number of arguments.\n", 30);
		return (0);
	}
	program = malloc(sizeof(t_program));
	if (!program)
		return (0);
	ft_data(argv[1], program);
	return (0);
}
