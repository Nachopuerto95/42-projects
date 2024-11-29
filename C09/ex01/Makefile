CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = srcs/
SRC = $(SRC_DIR)ft_putchar.c $(SRC_DIR)ft_swap.c $(SRC_DIR)ft_putstr.c $(SRC_DIR)ft_strlen.c $(SRC_DIR)ft_strcmp.c
INC_DIR = includes/
DEPS = $(INC_DIR)ft.h
OBJ = $(SRC:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

