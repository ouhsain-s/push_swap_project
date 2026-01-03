/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 16:42:39 by souhsain          #+#    #+#             */
/*   Updated: 2026/01/03 15:24:00 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **a, int print_operator)
{
	if (rotate_nodes(a) && print_operator)
		write (1, "ra\n", 3);
}

void	rb(t_node **b, int print_operator)
{
	if (rotate_nodes(b) && print_operator)
		write (1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b, int print_operator)
{
	if (rotate_nodes(a) && rotate_nodes(b) && print_operator)
		write (1, "rr\n", 3);
}
