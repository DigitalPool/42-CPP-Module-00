CC = c++
NAME = phonebook
FLAGS = -Wall -Wextra -Werror
SRC = phonebook.cpp

all :
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
