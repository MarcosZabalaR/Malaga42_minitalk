# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 18:47:48 by mzabala-          #+#    #+#              #
#    Updated: 2024/03/07 22:09:01 by mzabala-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
FILES = libftprintf.c ft_print_pointer.c ft_printutils.c ft_print_hexadecimal.c

OBJECTS = $(FILES:.c=.o)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS) : $(FILES)
	gcc $(FLAGS) -c $(FILES)

all: $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:
	all clean fclean re
