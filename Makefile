# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcosta-d <mcosta-d@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 11:58:45 by mcosta-d          #+#    #+#              #
#    Updated: 2023/05/16 11:58:47 by mcosta-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FILES = ft_nb_conversions.c ft_char_conversions.c ft_printf.c\

CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJS = $(FILES:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all:$(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
