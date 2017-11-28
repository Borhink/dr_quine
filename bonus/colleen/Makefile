# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qhonore <qhonore@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 10:30:43 by qhonore           #+#    #+#              #
#    Updated: 2017/11/28 20:46:28 by qhonore          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Colleen.cpp
OBJ = $(SRC:.cpp=.o)
NAME = cpp_Colleen

CC = g++
CFLAGS = -Wall -Wextra -Werror

all:
	@echo "\033[32;44m Make $(NAME) \033[0m"
	@make $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@echo "\033[35;44m Make clean $(NAME) \033[0m"
	rm -rf $(OBJ)

fclean: clean
	@echo "\033[35;44m Make fclean $(NAME) \033[0m"
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
