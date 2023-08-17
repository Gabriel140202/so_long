.SILENT:
NAME      = so_long
CC        = cc
CFLAGS    = -Wall -Wextra -Werror -g
SRC_DIR   = ./src
OBJ_DIR   = ./obj

SRCS = so_long.c\
		ft_keys.c\
		ft_map.c\
		ft_data.c\
		ft_error.c\
		ft_free.c\
		ft_map_utils.c \
		ft_path.c\
		ft_init_imagens.c\
		ft_move_player.c




OBJ = $(addprefix $(OBJ_DIR)/,$(notdir $(SRCS:.c=.o)))

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ) 
	make -C inc/libft
	make -C inc/minilibx-linux/
	$(CC) $(OBJ) -lXext -lX11 -lm -Linc/libft -lft -Linc/minilibx-linux -lmlx -o $(NAME) -g3 #-fsanitize=address

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
	make clean -C inc/libft
	make clean -C inc/minilibx-linux/

fclean: clean
	rm -rf $(NAME)
	make fclean -C inc/libft
	make clean -C inc/minilibx-linux/

re: fclean all

run: re
	$(MAKE) all
	./$(NAME) ahhhhh.ber

.PHONY: all clean fclean re  