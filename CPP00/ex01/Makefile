# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/25 16:56:03 by lmoulin           #+#    #+#              #
#    Updated: 2020/02/26 17:20:15 by lmoulin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

C++ = clang++

FLAG = -Wall -Werror -Wextra

SRC = phonebook.cpp main.cpp

OBJ = phonebook.o main.o

all : $(NAME)

$(NAME) : $(OBJ)
		$(C++) $(FLAGS) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
