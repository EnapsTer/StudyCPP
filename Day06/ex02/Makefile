NAME		= ex02

##################################sources#######################################

SRC			=	main.cpp\
				Base.cpp

#####i################################objects###################################
OBJ			= $(SRC:.cpp=.o)
#####################################flags######################################
CLANG_FLAGS	=	-Wall -Wextra -Werror
SANITIZE	=	-fsanitize=address
#####################################headers####################################

%.o:	%.cpp
	clang++ $(CLANG_FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJ)	$(INC)
	clang++ $(CLANG_FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

norm:
	cpplint --recursive .

.PHONY: all clean fclean re