# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghwa <ghwa@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 10:23:04 by ghwa              #+#    #+#              #
#    Updated: 2023/02/25 11:55:36 by ghwa             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SDIR = ./srcs/
HDIR = ./includes/
HEAD = ft.h
HEADS = ${addprefix $(HDIR), $(HEAD)}
SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS = ${addprefix $(SDIR), $(SRC)}
OBJECT = ${SRC:.c=.o}
OBJECTS = ${addprefix $(SDIR), $(OBJECT)}
CFLAGS = -c -Wall -Werror -Wextra -I
CC = cc
OUTPUT = libft.a

all: $(OUTPUT)

$(OUTPUT): $(OBJECTS)
	ar -crs -o $@ $(OBJECTS)

$(OBJECTS): $(SDIR)%.o: $(SDIR)%.c $(HEADS)
	$(CC) $(CFLAGS) $(HDIR) -o $@ $<

clean:
	rm -f $(SDIR)*.o

fclean: clean
	rm -f $(OUTPUT)

re: fclean all

.PHONY: all clean fclean re
