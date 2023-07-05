NAME      = so_long
CC        = clang
CFLAGS    = -Wall -Wextra -Werror
SRC_DIR   = ./src
OBJ_DIR   = ./obj

SRCS = main.c




OBJ = $(addprefix $(OBJ_DIR)/,$(notdir $(SRCS:.c=.o)))

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ) 
	make -C inc/libft
	make -C inc/minilibx-linux/
	$(CC) $(OBJ) -lXext -lX11 -lm -Linc/libft -lft -Linc/minilibx-linux -lmlx -o $(NAME) -g3 -fsanitize=address

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

.PHONY: all clean fclean re  