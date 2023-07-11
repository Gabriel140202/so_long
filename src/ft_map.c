/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:09:48 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/11 12:37:10 by gfrancis         ###   ########.fr       */
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

void	read_map(char *path, t_program *program)
{
	int				fd;
	int				index;
	t_list			*content;
	char			*line;

	index = 0;
	content = NULL;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		ft_error_program(program, 0);
	line = get_next_line(fd);
	while (line != NULL) 
	{
		ft_lstadd_back(&content, ft_lstnew(line));
		line = get_next_line(fd);
	}
	program->map.map = create_matrix(content, ft_lstsize(content));
	check_map(ft_lstsize(content) - 1, program);
	ft_lstclear(&content, free);
	close(fd);
}
