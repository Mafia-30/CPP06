# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/07 00:35:45 by ymafaman          #+#    #+#              #
#    Updated: 2024/09/09 06:18:36 by ymafaman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP_FILES = main.cpp ScalarConverter.cpp utils.cpp

OBJ_FILES = $(CPP_FILES:.cpp=.o)

NAME = convert

all : $(NAME)

$(NAME) : $(OBJ_FILES)
	$(CPP) $(FLAGS) $(OBJ_FILES) -o $(NAME)

%.o : %.cpp ScalarConverter.hpp utils.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ_FILES)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean