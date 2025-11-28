# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/17 17:14:31 by mchauvin          #+#    #+#              #
#    Updated: 2025/11/27 14:03:30 by mchauvin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all re clean fclean 

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
SRCS = ft_printf.c ft_print_char.c ft_print_str.c ft_print_nbr.c \
	ft_print_unnbr.c ft_print_hex.c ft_print_ptr.c ft_dispatch_format.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	$(AR) $(NAME) $(OBJS) 

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all