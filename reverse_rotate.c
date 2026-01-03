/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 16:48:30 by souhsain          #+#    #+#             */
/*   Updated: 2026/01/03 15:23:29 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node **a, int print_operator)
{
	if (revers_rotate_nodes(a) && print_operator)
		write (1, "rra\n", 4);
}

void	rrb(t_node **b, int print_operator)
{
	if (revers_rotate_nodes(b) && print_operator)
		write (1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b, int print_operator)
{
	if (revers_rotate_nodes(a) && revers_rotate_nodes(b) && print_operator)
		write (1, "rrr\n", 4);
}
