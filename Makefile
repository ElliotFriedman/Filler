# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efriedma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/12 15:49:44 by efriedma          #+#    #+#              #
#    Updated: 2018/08/12 20:02:54 by efriedma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -g -Wall -Wextra -Werror #-I src/ft_dprintf/libft -I src/ft_printf/libft -I src/ft_printf/includes -I src/ft_dprintf/includes -I src/get_next_line -I ./

SRC = read.c

NAME = filler

GNL = src/get_next_line/get_next_line.c

DEPEND = ft_printf

DEPEND_DIR = ft_printf

DDEPEND_DIR = src/ft_dprintf

DPRINTF = src/ft_dprintf/libftdprintf.a ft_printf/libftprintf.a 

all: $(NAME)

$(DEPEND):
	$(MAKE) -C $(DEPEND_DIR)
	$(MAKE) -C $(DDEPEND_DIR)

$(NAME): $(DEPEND)
	$(MAKE) -C $(DEPEND_DIR)
	$(MAKE) -C $(DDEPEND_DIR)
	gcc $(CFLAGS) $(GNL) $(SRC) $(DPRINTF) -o $(NAME)

clean:
	$(MAKE) -C $(DEPEND_DIR) clean
	$(MAKE) -C $(DDEPEND_DIR) clean

fclean: clean
	$(MAKE) -C $(DEPEND_DIR) clean
	$(MAKE) -C $(DDEPEND_DIR) fclean
	rm $(NAME)

re: fclean all
