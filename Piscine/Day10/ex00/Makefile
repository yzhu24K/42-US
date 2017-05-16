NAME 		= libft.a
CC 			= gcc -I=$(HEADER) -Wall -Wextra -Werror -g
SRC_DIR 	= srcs/
HEADER 		= includes/
FUNCTIONS 	= ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap
OBJ 		= $(patsubst %,%.o,$(FUNCTIONS))

.PHONY: all clean fclean re

all: $(NAME)

$(OBJ):
	$(CC) -c $(patsubst %.o,$(SRC_DIR)%.c,$@)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all