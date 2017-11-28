# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qhonore <qhonore@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 10:30:43 by qhonore           #+#    #+#              #
#    Updated: 2017/11/28 20:40:23 by qhonore          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Dr_Quine

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all:
	@echo "\033[37;44m MAKE ALL \033[0m"
	@make $(NAME)

$(NAME):
	@make -C colleen
	@make -C grace
	@make -C sully
	@make -C bonus/colleen
	@make -C bonus/grace
	@make -C bonus/sully

colleen:
	@make -C colleen

grace:
	@make -C grace

sully:
	@make -C sully

bonus:
	@make -C bonus/colleen
	@make -C bonus/grace
	@make -C bonus/sully

clean_colleen:
	@make clean -C colleen

clean_grace:
	@make clean -C grace

clean_sully:
	@make clean -C sully

clean_bonus:
	@make clean -C bonus/colleen
	@make clean -C bonus/grace
	@make clean -C bonus/sully

clean: clean_colleen clean_grace clean_sully clean_bonus

fclean_colleen:
	@make fclean -C colleen

fclean_grace:
	@make fclean -C grace

fclean_sully:
	@make fclean -C sully

fclean_bonus:
	@make fclean -C bonus/colleen
	@make fclean -C bonus/grace
	@make fclean -C bonus/sully

fclean: fclean_colleen fclean_grace fclean_sully fclean_bonus

test:
	make test -C sully
	make test -C bonus/sully

re: fclean all

.PHONY: clean fclean re
