# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/23 16:17:51 by tmaluh            #+#    #+#              #
#    Updated: 2018/10/23 17:10:58 by tmaluh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

LID = lib/includes

CFLAGS = -Wall -Wextra -Werror

SRC = lib/srcs/ft_error.c lib/srcs/ft_display_file.c

OBJ = ft_error.o ft_display_file.o

all: lib main

lib:
	@gcc $(CFLAGS) -I$(LID) -c $(SRC)
	@ar rc lib/libft.a $(OBJ)
	@ranlib lib/libft.a

main:
	@gcc -o $(NAME) srcs/main.c -Llib -lft

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
	@rm -rf lib/libft.a

re: fclean all

.PHONY: all lib main clean fclean re
