NAME		=  bureaucrat
CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
SRC 		= Bureaucrat.cpp main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean re
