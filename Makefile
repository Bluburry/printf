# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpinto-e <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 15:06:13 by tpinto-e          #+#    #+#              #
#    Updated: 2023/01/11 21:46:29 by tpinto-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
PRINTF_SRC = ft_printf.c ft_utils.c ft_printhexa.c ft_printptr.c
PRINTF_OBJ = $(PRINTF_SRC:.c=.o)
all: $(NAME)
$(NAME): $(PRINTF_OBJ)
	@make -C ./libft
	@cp libft/libft.a $(NAME)
	@ar rcs $(NAME) $(PRINTF_OBJ)
clean:
	@make clean -C ./libft
	@$(RM) $(PRINTF_OBJ)
fclean: clean
	@make fclean -C ./libft
	@$(RM) $(NAME)
re: fclean all
.PHONY: all, clean, fclean, re