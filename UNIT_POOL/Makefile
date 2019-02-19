# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skhorich <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 09:44:50 by skhorich          #+#    #+#              #
#    Updated: 2018/02/19 15:24:56 by skhorich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
H_LIBS = includes 

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Wextra -I $(H_LIBS) -c $(SRC)
	ar -rv $(NAME) *.o
	ranlib $(NAME)

clean:
		/bin/rm -f *.o

fclean: clean 
		/bin/rm -f $(NAME)

re: fclean all
