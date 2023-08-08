/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:46:13 by gfrancis          #+#    #+#             */
/*   Updated: 2023/08/08 22:02:18 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	main(int argc, char **argv)
{
	t_program	*program;

	if (argc != 2)
	{
		write(1, "Numero de argumentos invalido.\n", 31);
		return (0);
	}
	program = ft_calloc(1, sizeof(t_program));
	if (!program)
		return (0);
	ft_data(argv[1], program);
	return (0);
}
