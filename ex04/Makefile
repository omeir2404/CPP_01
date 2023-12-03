NAME	= Sed_is_for_losers

CC		= c++ -Wall -Werror -Wextra 

CFLAGS	= -Wall -Werror -Wextra 

SRC	= main.cpp 

all:	$(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)
	clear

run: re
	@valgrind --log-file="./logfile" --leak-check=full --show-leak-kinds=all ./$(NAME)

clean:		
	rm -f $(NAME)
	clear

re:			clean $(NAME)

.PHONY:	all clean fclean re
	valgrind --log-file="./logfile" --leak-check=full --show-leak-kinds=all ./$(NAME)
