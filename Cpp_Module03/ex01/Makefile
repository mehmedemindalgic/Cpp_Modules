NAME	= ScavTrap

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= ClapTrap.cpp  ScavTrap.cpp main.cpp

all: $(NAME)

$(NAME):
	@ $(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean re
