# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/13 12:30:16 by knarwhal          #+#    #+#              #
#    Updated: 2019/08/13 14:55:47 by knarwhal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
HEADER = ./includes/
SRCS = ./srcs/*.c

.PHONY: all $(NAME) cean fclean re

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -I $(HEADER) $(SRCS) -o $(NAME)

clean:
		/bin/rm -f $(NAME)

fclean: clean

re: clean all
