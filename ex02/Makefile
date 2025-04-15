# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nisi <nisi@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 15:37:59 by nisi              #+#    #+#              #
#    Updated: 2025/04/15 17:24:41 by nisi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Account.cpp\
	tests.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re