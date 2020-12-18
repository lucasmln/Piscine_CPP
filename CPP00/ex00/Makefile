# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/25 16:56:03 by lmoulin           #+#    #+#              #
#    Updated: 2020/02/25 17:58:29 by lmoulin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

C++ = clang++

FLAG = -Wall -Werror -Wextra

SRC = megaphone.cpp

OBJ = megaphone.o

all : $(NAME)

$(NAME) : $(OBJ)
		$(C++) $(FLAGS) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
