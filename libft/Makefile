# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpinto-e <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 19:34:32 by tpinto-e          #+#    #+#              #
#    Updated: 2023/01/12 17:51:21 by tpinto-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAG = -Wall -Wextra -Werror -I.
NAME = libft.a
LIB_SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	  ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	  ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	  ft_putstr_fd.c ft_split.c ft_strlcat.c ft_strchr.c ft_strlcpy.c \
	  ft_strncmp.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlen.c \
	  ft_strmapi.c ft_strnstr.c ft_strrchr.c ft_substr.c ft_strtrim.c \
	  ft_tolower.c ft_toupper.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
	  ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	  ft_lstmap.c ft_putnbr_base.c
LIB_OBJ = $(LIB_SRC:.c=.o)
all: $(NAME)
$(NAME): $(LIB_OBJ)
	@ar rcs $(NAME) $(LIB_OBJ)
%.o: %.c
	@cc $(FLAG) -c $< -o $@
clean:
	@rm -f $(LIB_OBJ)
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all, clean, fclean, re
