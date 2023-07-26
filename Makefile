# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlerebou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/21 11:09:31 by tlerebou          #+#    #+#              #
#    Updated: 2023/07/25 09:52:08 by tlerebou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CFLAG= -Wall -Wextra -Werror -g

all : $(NAME)

$(NAME) : ft_carre.o ft_outil.o ft_read.o ft_readfile.o ft_total.o ft_main.o
	gcc -o $(NAME) ft_carre.o ft_outil.o ft_read.o ft_readfile.o ft_total.o ft_main.o

ft_carre.o : ft_carre.c
	gcc -o ft_carre.o -c ft_carre.c $(CFLAG)

ft_outil.o : ft_outil.c
	gcc -o ft_outil.o -c ft_outil.c $(CFLAG)

ft_read.o : ft_read.c
	gcc -o ft_read.o -c ft_read.c $(CFLAG)

ft_readfile.o : ft_readfile.c
	gcc -o ft_readfile.o -c ft_readfile.c $(CFLAG)

ft_total.o : ft_total.c
	gcc -o ft_total.o -c ft_total.c $(CFLAG)

ft_main.o : ft_main.c
	gcc -o ft_main.o -c ft_main.c $(CFLAG)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all
