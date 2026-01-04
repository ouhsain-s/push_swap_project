/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transfer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 16:36:08 by souhsain          #+#    #+#             */
/*   Updated: 2026/01/04 11:24:36 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_node **b, t_node **a, int print_operator)
{
	if (transfer_first_node(b, a) && print_operator)
		write(1, "pa\n", 3);
}

void	pb(t_node **a, t_node **b, int print_operator)
{
	if (transfer_first_node(a, b) && print_operator)
		write(1, "pb\n", 3);
}
