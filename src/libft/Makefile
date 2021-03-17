# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnbou <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/08 06:11:16 by rnbou             #+#    #+#              #
#    Updated: 2018/10/08 06:18:28 by rnbou            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: $(NAME)
$(NAME):
	gcc -c -Wall -Wextra -Werror *.c
	ar rc $(NAME) *.o
clean:
	rm -rf *.o
fclean: clean
	rm -rf $(NAME)
re: fclean $(NAME)
