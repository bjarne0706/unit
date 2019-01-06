# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchantse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 12:38:10 by dchantse          #+#    #+#              #
#    Updated: 2018/12/09 04:59:54 by anerus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

all: $(NAME)

$(NAME):
	make -C libft/ fclean && make -C libft/
	clang -Wall -Wextra -Werror -I libft/ -o fillit.o -c source/fillit.c -g
	clang -Wall -Wextra -Werror -I libft/ -o algorithm.o -c source/algorithm.c -g
	clang -Wall -Wextra -Werror -I libft/ -o map.o -c source/map.c -g
	clang -Wall -Wextra -Werror -I libft/ -o map2.o -c source/map2.c -g
	clang -o fillit fillit.o algorithm.o map2.o map.o -I libft/ -L libft/ -lft -g
clean:
	rm -rf fillit.o algorithm.o map.o map2.o
	make -C libft/ clean
fclean: clean
	rm -rf fillit
	make -C libft/ fclean
re: fclean all
