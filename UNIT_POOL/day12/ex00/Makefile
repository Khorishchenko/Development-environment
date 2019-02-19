# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skhorich <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 09:44:50 by skhorich          #+#    #+#              #
#    Updated: 2018/02/22 19:57:50 by skhorich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = srcs/main.c srcs/ft*.c
HEADER = includes/ 

all: $(KILLER)

$(KILLER):
	gcc -Wall -Wextra -Werror -I $(HEADER) $(SRC) -o $(NAME)

clean:
		/bin/rm -f *.o

fclean: clean 
		/bin/rm -f $(NAME)

re: fclean all
