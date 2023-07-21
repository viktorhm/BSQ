# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlerebou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/21 11:09:31 by tlerebou          #+#    #+#              #
#    Updated: 2023/07/21 11:13:44 by tlerebou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all : bsq

bsq : ft_carre.o ft_outil.o ft_main.o
	gcc -o bsq ft_carre.o ft_outil.o ft_main.o

ft_carre.o : ft_carre.c
	gcc -o ft_carre.o -c ft_carre.c -Wall -Wextra -Werror

ft_outil.o : ft_outil.c
	gcc -o ft_outil.o -c ft_outil.c -Wall -Wextra -Werror

ft_main.o : ft_main.c
	gcc -o ft_main.o -c ft_main.c -Wall -Wextra -Werror

clean :
	rm -rf *.o
