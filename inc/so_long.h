/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:12:06 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/06 14:34:21 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include "libft/inc/libft.h"
#include "minilibx-linux/mlx.h"

typedef struct t_map{
	
	void	*player;
	void	*wall;
	void	*collectible;
	void	*ground;
	void	*exit;
}				s_map;

typedef struct	t_program {
	void	*mlx;
	void	*win;
	s_map	map;
}				s_program;

/*/______________________________KEYS________________________________/*/
enum e_keys
{
	key_A = 97,
	key_S = 115,
	key_D = 100,
	key_W = 119,
};
int	key_hook(int keycode, s_program *program);
/*/__________________________________________________________________/*/

/*/________________________________DATA______________________________/*/
int	data(char *path, s_program *program);
/*/__________________________________________________________________/*/

/*/________________________________ERROR_____________________________/*/
void ft_error(s_program *program, int erro);
int	ft_free(s_program *program);
void ft_error_map(char **map, int erro);
/*/__________________________________________________________________/*/

/*/________________________________MAP_______________________________/*/
void	check_map_extension(char *map_extension, s_program *program);
char **read_map(char *path, s_program *program);
char	**create_matrix(t_list *list, int i);
void check_map(char **map, s_program *program);
/*/__________________________________________________________________/*/

int main(int argc, char **argv);

#endif