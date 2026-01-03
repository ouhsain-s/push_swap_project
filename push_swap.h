/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 10:48:27 by souhsain          #+#    #+#             */
/*   Updated: 2026/01/03 15:29:30 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct st_stack
{
	int						value;
	int						rank;
	struct st_stack			*next;
	struct st_stack			*previous;
}	t_node;

int		is_recognized_char_in_string(char *s, size_t index);
int		ft_isdigit(int d);
int		check_duplicate(t_node *head);
void	free_nodes(t_node *head);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_atoi(char *str);

int		add_numbers_tostack(t_node **head, int num_s, char **arr_s);
size_t	ft_strlen(const char *s);

int		swap_value_with_next(t_node **head);
int		transfer_first_node(t_node **src, t_node **dest);
int		rotate_nodes(t_node **head);
int		revers_rotate_nodes(t_node **head);
size_t	indexing_nodes(t_node *head);
size_t	size_ln(t_node *head);

void	sa(t_node **a, int print_opirator);
void	sb(t_node **b, int print_opirator);
void	ss(t_node **a, t_node **b, int print_opirator);
void	pa(t_node **b, t_node **a, int print_operator);
void	pb(t_node **a, t_node **b, int print_operator);
void	ra(t_node **a, int print_operator);
void	rb(t_node **b, int print_operator);
void	rr(t_node **a, t_node **b, int print_operator);
void	rra(t_node **a, int print_operator);
void	rrb(t_node **b, int print_operator);
void	rrr(t_node **a, t_node **b, int print_operator);

int		ranking_nodes(t_node *head);
int		sort_valuse_bytow_stacks(t_node **a, t_node **b);
void	push_all_elements_to_b(t_node **a, t_node **b, int chuck_size);
void	return_sorted_elements_to_a(t_node **a, t_node **b);

void	push_chunks_to_b(t_node **a, t_node **b, int chuck_size);

#endif