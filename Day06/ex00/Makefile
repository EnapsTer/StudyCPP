NAME		= convert
##################################sources#######################################

SRC			=	main.cpp\
				srcs/Converter.cpp\
				srcs/ConverterToType.cpp\
				srcs/ConvertToChar.cpp\
				srcs/ConvertToDouble.cpp\
				srcs/ConvertToFloat.cpp\
				srcs/ConvertToInt.cpp

#####i################################objects###################################
OBJ			= $(SRC:.cpp=.o)
#####################################flags######################################
CLANG_FLAGS	=	-Wall -Wextra -Werror
SANITIZE	=	-fsanitize=address
#####################################headers####################################
INC			=	includes

%.o:	%.cpp
	clang++ $(CLANG_FLAGS) -I$(INC) -c $< -o $(<:.cpp=.o)

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