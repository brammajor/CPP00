# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 11:15:27 by brmajor           #+#    #+#              #
#    Updated: 2023/12/07 14:28:29 by brmajor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = phonebook.cpp contact.cpp main.cpp

CC = c++ -Wall -Werror -Wextra -std=c++98 -g

NAME = phonebook

$(NAME): $(SRC) phonebook.hpp
	$(CC) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@echo "Nothing to clean"

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
