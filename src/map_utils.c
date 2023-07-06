/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:36:09 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/06 14:34:11 by gfrancis         ###   ########.fr       */
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
