# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/09 03:32:32 by ymafaman          #+#    #+#              #
#    Updated: 2024/09/09 06:17:57 by ymafaman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP_FILES = main.cpp Base.cpp functions.cpp

OBJ_FILES = $(CPP_FILES:.cpp=.o)

NAME = TypeIdentifier

all : $(NAME)

$(NAME) : $(OBJ_FILES)
	$(CPP) $(FLAGS) $(OBJ_FILES) -o $(NAME)

%.o : %.cpp Base.hpp A.hpp B.hpp C.hpp functions.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ_FILES)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean