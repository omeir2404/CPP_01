NAME	= Zombie

CC		= c++ -Wall -Werror -Wextra 

CFLAGS	= -Wall -Werror -Wextra 

SRC	= Zombie.cpp newZombie.cpp randomChump.cpp main.cpp 


all:	$(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:		
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:	all clean fclean re