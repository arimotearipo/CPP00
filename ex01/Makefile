CC	= c++

INCLUDES = -I phonebook.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Contact.cpp Phonebook.cpp Utilities.cpp

OBJ = $(SRC:.cpp=.o)

NAME = phonebook

all:	$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re:	fclean all