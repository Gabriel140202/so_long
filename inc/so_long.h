/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:12:06 by gfrancis          #+#    #+#             */
/*   Updated: 2023/07/06 11:23:52 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include "libft/inc/libft.h"
#include "minilibx-linux/mlx.h"

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

typedef struct	t_program {
	void	*mlx;
	void	*win;
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
int	data(char *map_extension, s_program *program);
/*/__________________________________________________________________/*/

/*/________________________________ERROR_____________________________/*/
void ft_error(s_program *program, int erro);
int	ft_free(s_program *program);
/*/__________________________________________________________________/*/

/*/________________________________MAP_______________________________/*/
void	check_map_extension(char *map_extension, s_program *program);
/*/__________________________________________________________________/*/



int main(int argc, char **argv);

#endif