# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/26 18:18:39 by souhsain          #+#    #+#              #
#    Updated: 2025/12/29 16:46:56 by souhsain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c push_swap.c reverse_rotate.c swap.c ft_substr.c parsing.c rotate.c transfer.c get_size_list.c sort_algo.c utils.c linkedlist_manger.c stack_manager.c return_sorted_elements_to_a.c push_all_elements_to_b.c
OBJ = $(SRC:%.c=%.o)
INC = push_swap.h

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean