# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/18 16:43:33 by cfarnswo          #+#    #+#              #
#    Updated: 2017/10/11 09:23:35 by cfarnswo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=gcc
MAIN=maintest.c
CFLAGS=-Wall -Werror -Wextra -I ./ -c
FILES=	./ft_memset				\
		./ft_bzero				\
		./ft_memcpy				\
		./ft_memccpy			\
		./ft_memmove			\
		./ft_memchr				\
		./ft_memcmp				\
		./ft_strlen				\
		./ft_strcpy				\
		./ft_strdup				\
		./ft_strncpy			\
		./ft_strcat				\
		./ft_strncat			\
		./ft_strlcat			\
		./ft_strchr				\
		./ft_strrchr			\
		./ft_strstr				\
		./ft_strnstr			\
		./ft_strcmp				\
		./ft_strncmp			\
		./ft_atoi				\
		./ft_isalpha			\
		./ft_isdigit			\
		./ft_isalnum			\
		./ft_isascii			\
		./ft_isprint			\
		./ft_toupper			\
		./ft_tolower			\
		./ft_itoa				\
		./ft_memalloc			\
		./ft_memdel				\
		./ft_strnew				\
		./ft_strclr				\
		./ft_strdel				\
		./ft_striter			\
		./ft_striteri			\
		./ft_strmap				\
		./ft_strmapi			\
		./ft_strequ				\
		./ft_strnequ			\
		./ft_strsub				\
		./ft_strjoin			\
		./ft_strtrim			\
		./ft_strsplit			\
		./ft_putchar			\
		./ft_putstr				\
		./ft_putendl			\
		./ft_putnbr				\
		./ft_putchar_fd			\
		./ft_putstr_fd			\
		./ft_putendl_fd			\
		./ft_putnbr_fd			\
		./ft_lstnew				\
		./ft_lstdelone			\
		./ft_lstdel				\
		./ft_lstadd				\
		./ft_lstiter			\
		./ft_lstmap				\
		./ft_strrev				\
		./ft_power				\
		./ft_gcf				\
		./ft_num_placevalues			\
		./ft_lcm				\

SRC=$(addsuffix .c, $(FILES))
OBJ=$(addsuffix .o, $(FILES))

all: $(NAME)
   
$(NAME):$(OBJ)
	ar rcs $(NAME) $(OBJ) 

$(OBJ):$(SRC)
	$(CC) $(CFLAGS) $(SRC)

clean:
	/bin/rm -rf $(OBJ)
	
fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all 
