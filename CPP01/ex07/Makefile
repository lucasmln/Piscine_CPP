CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJECTS = replace.o

NAME = replace

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS)  $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
