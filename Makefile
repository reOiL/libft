# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwebber <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 17:05:02 by jwebber           #+#    #+#              #
#    Updated: 2019/09/05 18:00:30 by jwebber          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c \
	  ft_bzero.c

OBJ = ft_memset.o \
	  ft_bzero.o

FLAGS = -Wall -Werror -Wextra

RM = /bin/rm -f

$(NAME): $(OBJ)
	gcc -c $(SRC) $(FLAGS)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: all
	gcc test.c -o test.out $(NAME) $(FLAGS)
	./test.out
	$(RM) test.out
