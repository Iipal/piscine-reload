# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/23 15:36:16 by tmaluh            #+#    #+#              #
#    Updated: 2018/10/23 17:11:43 by tmaluh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -march=native -c -Wall -Wextra -Werror -Ofast -o
CL = ar rcs

O = srcs/obj/
D = srcs/
OBJS = $Oft_putchar.o $Oft_putstr.o $Oft_strcmp.o $Oft_strlen.o $Oft_swap.o

all: lib

lib:
	@mkdir -p $O
	@$(CC) $Dft_putchar.c $(CFLAGS) $Oft_putchar.o
	@$(CC) $Dft_putstr.c $(CFLAGS) $Oft_putstr.o
	@$(CC) $Dft_strcmp.c $(CFLAGS) $Oft_strcmp.o
	@$(CC) $Dft_strlen.c $(CFLAGS) $Oft_strlen.o
	@$(CC) $Dft_swap.c $(CFLAGS) $Oft_swap.o
	@$(CL) libft.a $(OBJS)
	@ranlib libft.a
clean:
	@rm -rf $O

fclean: clean
	@rm -rf libft.a

re: fclean all

.PHONY: re fclean clean all
