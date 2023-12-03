NAME	= Unnecessary_violence

CC		= c++ -Wall -Werror -Wextra 

CFLAGS	= -Wall -Werror -Wextra 

SRC	= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

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
