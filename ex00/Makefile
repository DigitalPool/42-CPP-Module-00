CC = c++
NAME = megaphone
FLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp

all :
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
