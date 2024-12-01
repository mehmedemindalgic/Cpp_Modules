NAME	= Interface

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp
all: $(NAME)

$(NAME):
	@ $(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean re
