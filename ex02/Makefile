CC = c++
NAME = account
FLAGS = -Wall -Wextra -Werror
SRC = account.cpp

all :
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
