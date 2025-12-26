# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/26 18:18:39 by souhsain          #+#    #+#              #
#    Updated: 2025/12/26 18:47:55 by souhsain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
C_FLAGS = -Wall -Wextra -Werror
SRCS = push_swap.c substr.c ft_atoi.c  parsing.c stack_manager.c utils.c
OBJS = $(NAME:%.c=%.o)
CC = cc

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	
%.o : %.c push_swap.h
	cc $(C_FLAGS) -c $^ -o $@

clean :
        rm -f $(OBJS) $(BONUS_OBJS)
fclean : clean
        rm -f $(NAME)
re : fclean all

.PHONY : clean all re fclean 
