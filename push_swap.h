/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 10:48:27 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/29 11:09:42 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef push_swap_H
#define push_swap_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct st_stack
{
   struct st_stack *next;
   int  value;
   int   rank;
   struct st_stack *previous;
} node;

int	is_recognized_char_in_string(char *s, size_t index);
int     ft_isdigit(int d);
int	check_duplicate(node *head);
void	free_nodes(node *head);

char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);

char    *ft_substr(char const *s, unsigned int start, size_t len);
int     ft_atoi(char *str);

int	add_numbers_tostack(node **head, int num_s, char ** arr_s);
size_t ft_strlen(const char *s);


int swap_value_with_next(node **head);
int transfer_first_node(node **src, node **dest);
int rotate_nodes(node **head);
int revers_rotate_nodes(node **head);
size_t indexing_nodes(node *head);
size_t  size_ln(node *head);

void    sa(node **a, int print_opirator);
void    sb(node **b, int print_opirator);
void    ss(node **a, node **b, int print_opirator);
void    pa(node **a, node **b, int print_operator);
void    pb(node **b, node **a, int print_operator);
void    ra(node **a, int print_operator);
void    rb(node **b, int print_operator);
void    rr(node **a, node **b, int print_operator);
void    rra(node **a, int print_operator);
void    rrb(node **b, int print_operator);
void    rrr(node **a, node **b, int print_operator);


int sort_valuse_BYtow_stacks(node   **a, node    **b);


#endif