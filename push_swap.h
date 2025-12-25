/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 10:48:27 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/25 21:32:44 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef push_swap_H
#define push_swap_H

#include <unistd.h>
#include <stdlib.h>

typedef struct st_stack
{
    int *data;
    int size;
    int content;
} t_stack;

int	is_recognized_char_in_string(char *s, size_t index);
int     ft_atoi(const char *str);
int	add_numbers_tostack(t_stack stack, int num_s, char ** arr_s);

#endif