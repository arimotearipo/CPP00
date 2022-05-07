CC	= c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC1 = megaphone.cpp

EXE1 = megaphone

all:	$(EXE1)

megaphone:	$(SRC1)
			$(CC) $(FLAGS) $(SRC1) -o $(EXE1)

clean:
		rm -rf $(EXE1)

re:	clean all