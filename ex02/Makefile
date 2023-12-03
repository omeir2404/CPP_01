NAME	= main

CC		= c++ -Wall -Werror -Wextra 

CFLAGS	= -Wall -Werror -Wextra 

SRC	= main.cpp 


all:	$(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

run: all
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

clean:		
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:	all clean fclean re