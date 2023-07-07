/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:36:09 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/07 15:18:23 by gfrancis         ###   ########.fr       */
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

void check_first_last_line(char **map, int line)
{
	int i;
	int tamanho;
	
	i = 0;
	tamanho = ft_strlen(map[line]) - 2;
	while ((map[line][i] && i <= tamanho))
	{
		if (map[line][i] == '1')
		{
			i++;
		}
		else 
			ft_error_map(map, 2);
	}
}

/*void check_body(char **map, int size)
{
	olha o corpo do mapa se tem coletavais e player e tals...
	
}*/

void check_map(char **map, int size)
{
	check_first_last_line(map, 0);
	check_first_last_line(map, size);
	
}