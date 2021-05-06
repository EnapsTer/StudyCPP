NAME		= phonebook
#####################################sources#######################################

SRC			=	main.c\
				srcs/Contact.cpp\
				srcs/PhoneBook.cpp

#####i################################objects###################################
OBJ			= $(SRC:.c=.o)
#####################################flags######################################
CLANG_FLAGS		= -Wall -Wextra -Werror
SANITIZE	= -fsanitize=address
#####################################headers####################################
INC			= includes/

.c.o:
	clang++ $(CLANG_FLAGS) -I$(INC) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ) $(INC)
	clang++ $(CLANG_FLAGS) -I$(INC) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

norm:
	cpplint --filter=-legal/copyright --recursive .

.PHONY: all clean fclean re