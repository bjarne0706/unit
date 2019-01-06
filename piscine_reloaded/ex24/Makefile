# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchantse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/24 17:58:16 by dchantse          #+#    #+#              #
#    Updated: 2018/10/24 21:46:13 by dchantse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
MAIN = libft.a
HEADER = includes
OBJECT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
all: $(MAIN)

$(MAIN):
	gcc -c $(SRC) -I $(HEADER)
	ar rc $(MAIN) $(OBJECT)
clean:
	rm -rf *.o 
fclean: clean
	rm -rf $(MAIN)
re: fclean all
	
