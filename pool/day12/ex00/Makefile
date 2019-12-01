# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/14 20:12:12 by knarwhal          #+#    #+#              #
#    Updated: 2019/08/14 21:50:44 by knarwhal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
HEADER = ./includes/
SRCS = ./srcs/*.c

.PHONY: all $(NAME) cean fclean re

all: $(NAME)

$(NAME):
		@gcc -Wall -Wextra -Werror -I $(HEADER) $(SRCS) -o $(NAME)

clean:
		@/bin/rm -f $(NAME)

fclean: clean

re: fclean all
