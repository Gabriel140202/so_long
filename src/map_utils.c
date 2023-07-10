/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:36:09 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/10 12:46:53 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

char	**create_matrix(t_list *list, int i)
{
	t_list	*tmp;
	char	**mtx;
	int		j;

	j = 0;
	tmp = list;
	mtx = malloc(sizeof(char *) * (i + 1));
	if (!mtx)
		return (0);
	while (tmp != 0)
	{
		mtx[j] = tmp->content;
		tmp = tmp->next;
		j++;
	}
	mtx[j] = 0;
	return (mtx);
}

void	ft_print_list(t_list *lista) {
	while (lista) {
		ft_putstr_fd(lista->content, 1);
		lista = lista->next;
	}
}

void check_first_last_line(char **map, int line, int size)
{
	int i;
	
	i = 0;
	while ((map[line][i] && i <= size - 2))
	{
		if (map[line][i] == '1')
		{
			i++;
		}
		else 
			ft_error_map(map, 2);
	}
}

void check_body(char **map, t_program *program)
{
	size_t			x;
	size_t			y;
	
	y = 1;
	x = 0;
	while (y < program->map.height)
	{
		if(map[y][0] != '1' || map[y][program->map.width - 2] != '1')
			ft_error_map(map, 2);
		while(x <= program->map.width - 2)
		{
			if (map[y][x] == 'P')
				program->map.player++;
			if (map[y][x] == 'C')
				program->map.collectible++;
			if (map[y][x] == 'E')
				program->map.exit++;
			x++;
		}
		if(!(program->map.width == ft_strlen(map[y])))
			ft_error_map(map, 4);
		x = 0;
		y++;
	}
	if (!(program->map.player == 1 && program->map.exit == 1 && program->map.collectible >= 1))
		ft_error_map(map, 3);
}

void check_map(char **map, int line, t_program *program)
{
	program->map.height = line;
	program->map.width = ft_strlen(map[0]);
	check_first_last_line(map, 0, program->map.width);
	check_first_last_line(map, line, program->map.width);
	check_body(map, program);
}