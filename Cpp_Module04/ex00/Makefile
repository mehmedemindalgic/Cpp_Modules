NAME	= Animal

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp
all: $(NAME)

$(NAME):
	@ $(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean re
