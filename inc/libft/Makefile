NAME      = libft.a
CC        = cc
CFLAGS    = -Wall -Wextra -Werror
INCLUDE   = inc/libft.h
SRC_DIR   = ./src
OBJ_DIR   = ./obj


SRCS = src/ft_atoi.c\
        src/ft_strdup.c\
		src/ft_strlen.c\
		src/ft_isalpha.c\
		src/ft_isdigit.c\
		src/ft_isalnum.c\
		src/ft_isascii.c\
		src/ft_isprint.c\
		src/ft_toupper.c\
		src/ft_tolower.c\
		src/ft_strncmp.c\
		src/ft_strlcpy.c\
		src/ft_strlcat.c\
		src/ft_strnstr.c\
		src/ft_memset.c\
		src/ft_bzero.c\
		src/ft_memmove.c\
		src/ft_memcpy.c\
		src/ft_memchr.c\
		src/ft_memcmp.c\
		src/ft_calloc.c\
		src/ft_strchr.c\
		src/ft_strrchr.c\
		src/ft_substr.c\
		src/ft_strjoin.c\
		src/ft_strtrim.c\
		src/ft_itoa.c\
		src/ft_split.c\
		src/ft_strmapi.c\
		src/ft_striteri.c\
		src/ft_putchar_fd.c\
		src/ft_putendl_fd.c\
		src/ft_putnbr_fd.c\
		src/ft_putstr_fd.c\
		src/get_next_line.c\
		src/get_next_line_utils.c\
		src/ft_lstadd_back.c\
		src/ft_lstlast.c\
		src/ft_lstadd_front.c\
		src/ft_lstdelone.c\
		src/ft_lstnew.c\
		src/ft_lstsize.c\
		src/ft_lstclear.c\
		src/ft_lstiter.c\
		src/ft_lstmap.c\
		src/ft_printf.c\
		src/ft_putchar_print.c\
		src/ft_putnbr_hx_print.c\
		src/ft_putnbr_print.c\
		src/ft_putptr_print.c\
		src/ft_putstr_print.c\
		src/ft_putunnbr_print.c\
		src/ft_strcpy.c

OBJ = $(addprefix $(OBJ_DIR)/,$(notdir $(SRCS:.c=.o)))

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ) $(INCLUDE)
	ar -rcs $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re  