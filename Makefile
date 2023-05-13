#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcosta-d <mcosta-d@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/13 17:07:37 by mcosta-d          #+#    #+#              #
#    Updated: 2023/05/13 17:24:07 by mcosta-d         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libftprintf.a
FILES = ft_conversions.c ft_printf.c\

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
