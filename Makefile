# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwebber <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 17:05:02 by jwebber           #+#    #+#              #
#    Updated: 2019/09/05 18:52:37 by jwebber          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = src/ft_memset.c \
	  src/ft_bzero.c \
	  src/ft_memcpy.c \
	  src/ft_memccpy.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra -Iinclude

INC = -I include

RM = /bin/rm -f

TEST_NAME = test.out

TEST_SRC = test.c

cc = gcc

.c.o:
	$(cc) $(INC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: all
	$(cc) $(TEST_SRC) -o $(TEST_NAME) $(NAME) $(FLAGS) $(INC)
	./$(TEST_NAME)
	$(RM) $(TEST_NAME)
