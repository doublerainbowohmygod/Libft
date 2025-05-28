# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoneil <aoneil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/19 16:53:44 by aoneil            #+#    #+#              #
#    Updated: 2025/05/28 17:58:41 by aoneil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 
CC = cc
CFLAGS = -Wextra -Wall -Werror
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re


# CC = gcc
# CFLAGS = -Wall -Wextra -Werror -g
# SRC = ft_bzero.c \
#       ft_isalnum.c \
#       ft_isalpha.c \
#       ft_isascii.c \
#       ft_isdigit.c \
#       ft_isprint.c \
#       ft_memset.c \
#       ft_strlen.c \
#       ft_memcpy.c \
#       ft_memmove.c \
#       ft_strchr.c \
#       ft_strlcat.c \
#       ft_strlcpy.c \
#       ft_strrchr.c \
#       ft_tolower.c \
#       ft_toupper.c \
#       ft_strncmp.c \
#       ft_memchr.c \
#       ft_memcmp.c \
#       ft_strnstr.c \
#       ft_atoi.c \
#       ft_calloc.c \
#       ft_strdup.c \
#       ft_substr.c \
#       ft_strjoin.c \
#       ft_strtrim.c \
#       ft_split.c
# OBJ = $(SRC:.c=.o)
# NAME = myprogram

# all: $(NAME)

# $(NAME): $(OBJ)
# 	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# clean:
# 	rm -f $(OBJ)

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# .PHONY: all clean fclean re
