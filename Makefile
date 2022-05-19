# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fernanda <fernanda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/16 19:43:30 by fernanda          #+#    #+#              #
#    Updated: 2022/05/18 13:30:55 by fernanda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror
NAME			= libft.a
SRC				= ft_atoi.c ft_strlcat.c ft_strlen.c ft_strnstr.c
OBJ				= $(SRC:.c=.o)
RM				= /bin/rm -rf
FLIB			= -rcs

all:			$(NAME) libft.h
$(NAME):		$(OBJ)
				@ar $(FLIB) $(NAME) $(OBJ)
				@ranlib $(NAME)

.c.o:
				@$(CC) $(CFLAGS) -I . -c $< -o $@

clean:
				@$(RM) $(OBJ)

fclean:		clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
