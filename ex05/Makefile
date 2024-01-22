NAME	= ex05

CC		= c++ -Wall -Werror -Wextra -g -std=c++98

CFLAGS	= -Wall -Werror -Wextra 

SRC	= main.cpp Harl.cpp Harl.hpp

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
