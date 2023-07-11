/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:12:06 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/11 12:34:10 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft/inc/libft.h"
# include "minilibx-linux/mlx.h"

typedef struct s_map
{
	int			player;
	void		*wall;
	int			collectible;
	void		*ground;
	int			exit;
	char		**map;
	size_t		height;
	size_t		width;
}				t_map;

typedef struct s_program {
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
int			key_hook(int keycode, t_program *program);
/*/__________________________________________________________________/*/

/*/________________________________DATA______________________________/*/
int			ft_data(char *path, t_program *program);
/*/__________________________________________________________________/*/

/*/____________________________ERROR/FREE____________________________/*/
void		ft_error_program(t_program *program, int erro);
void		ft_free_program(t_program *program);
void		ft_error_map(char **map, int erro);
void		ft_free_map(char **map);
void		free_matrix(char **matrix);
/*/__________________________________________________________________/*/

/*/________________________________MAP_______________________________/*/
void		check_map_extension(char *map_extension, t_program *program);
void		read_map(char *path, t_program *program);
char		**create_matrix(t_list *list, int i);
void		check_first_last_line(char **map, int line, int size);
void		check_map(int size, t_program *program);
void		check_body(t_program *program);
/*/__________________________________________________________________/*/

int			main(int argc, char **argv);

#endif