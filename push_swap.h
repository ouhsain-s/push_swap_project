/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 10:48:27 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/26 12:31:46 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef push_swap_H
#define push_swap_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct st_stack
{
    int *data;
    int size;
    int content;
} t_stack;

int	is_recognized_char_in_string(char *s, size_t index);
int     ft_isdigit(int d);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);

char    *ft_substr(char const *s, unsigned int start, size_t len);
int     ft_atoi(const char *str);

int	add_numbers_tostack(t_stack stack, int num_s, char ** arr_s);



#endif