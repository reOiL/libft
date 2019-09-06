# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwebber <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 17:05:02 by jwebber           #+#    #+#              #
#    Updated: 2019/09/06 19:21:12 by jwebber          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = src/ft_memset.c \
	  src/ft_bzero.c \
	  src/ft_memcpy.c \
	  src/ft_memccpy.c \
	  src/ft_memmove.c \
	  src/ft_memchr.c \
	  src/ft_memcmp.c \
	  src/ft_strlen.c \
	  src/ft_strdup.c \
	  src/ft_strcpy.c \
	  src/ft_strncpy.c  \
	  src/ft_strcat.c \
	  src/ft_strncat.c \
	  src/ft_strlcat.c \
	  src/ft_strchr.c \
	  src/ft_strrchr.c \
	  src/ft_strstr.c \
	  src/ft_strnstr.c

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
