/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:12:06 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/07 15:03:56 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include "libft/inc/libft.h"
#include "minilibx-linux/mlx.h"

typedef struct s_map{
	
	void	*player;
	void	*wall;
	void	*collectible;
	void	*ground;
	void	*exit;
}				t_map;

typedef struct	s_program {
	void	*mlx;
	void	*win;
	t_map	map;
}				t_program;

/*/______________________________KEYS________________________________/*/
enum e_keys
{
	key_A = 97,
	key_S = 115,
	key_D = 100,
	key_W = 119,
};
int	key_hook(int keycode, t_program *program);
/*/__________________________________________________________________/*/

/*/________________________________DATA______________________________/*/
int	data(char *path, t_program *program);
/*/__________________________________________________________________/*/

/*/________________________________ERROR_____________________________/*/
void ft_error_program(t_program *program, int erro);
int	ft_free_program(t_program *program);
void ft_error_map(char **map, int erro);
int	ft_free_map(char **map);
/*/__________________________________________________________________/*/

/*/________________________________MAP_______________________________/*/
void	check_map_extension(char *map_extension, t_program *program);
char **read_map(char *path, t_program *program);
char	**create_matrix(t_list *list, int i);
void check_first_last_line(char **map, int line);
void check_map(char **map, int size);
/*/__________________________________________________________________/*/

int main(int argc, char **argv);

#endif