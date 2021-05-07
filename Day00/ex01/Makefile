NAME		= phonebook
##################################sources#######################################

SRC			=	main.c\
				srcs/Contact.cpp\
				srcs/PhoneBook.cpp

#####i################################objects###################################
OBJ			= $(SRC:.cpp=.o)
#####################################flags######################################
CLANG_FLAGS	=	-Wall -Wextra -Werror
SANITIZE	=	-fsanitize=address
#####################################headers####################################
INC			=	includes

%.o:	%.cpp
	clang++ $(CLANG_FLAGS) -I$(INC) -c $<

$(NAME):	$(OBJ)	$(INC)
	clang++ $(CLANG_FLAGS) -I$(INC) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

norm:
	cpplint --recursive .

.PHONY: all clean fclean re