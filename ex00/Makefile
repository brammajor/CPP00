# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brmajor <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 11:15:27 by brmajor           #+#    #+#              #
#    Updated: 2023/10/30 13:51:34 by brmajor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

CC = c++ -Wall -Werror -Wextra -std=c++98

NAME = megaphone

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@echo "Nothing to clean"

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean flcean re
