# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efriedma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/12 15:49:44 by efriedma          #+#    #+#              #
#    Updated: 2018/08/12 16:24:25 by efriedma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

SRC = src/read.c

NAME = filler

GNL = src/get_next_line/get_next_line.c

DEPEND = ft_printf

DEPEND_DIR = src/ft_printf

DDEPEND_DIR = src/ft_printf/ft_dprintf


DPRINTF = src/ft_printf/libftprintf.a src/ft_printf/ft_dprintf/libftdprintf.a


all: $(NAME)

$(DEPEND):
	$(MAKE) -C $(DEPEND_DIR)
	$(MAKE) -C $(DDEPEND_DIR)

$(NAME): $(DEPEND)
	gcc $(CFLAGS) $(GNL) $(SRC) $(DPRINTF) -o $(NAME)
