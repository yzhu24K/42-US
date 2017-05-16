NAME = do-op

FILE = do_func.c math.c main.c

all:$(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(FILE) -o $(NAME)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: fclean all
