/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_sorted_elements_to_a.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:56:45 by souhsain          #+#    #+#             */
/*   Updated: 2026/01/04 11:57:28 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_pose_current_rank(t_node *stack, int rank_to_find)
{
	int	count;

	count = 0;
	while (stack)
	{
		if (stack->rank == rank_to_find)
			break ;
		count++;
		stack = stack->next;
	}
	return (count);
}

void	return_sorted_elements_to_a(t_node **a, t_node **b)
{
	int	count;

	count = size_ln(*b) - 1;
	while (*b)
	{
		if ((*b)->rank == count)
		{
			pa(b, a, 1);
			count--;
		}
		else
		{
			if (get_pose_current_rank(*b, count) <= (count + 1) / 2)
				rb(b, 1);
			else
				rrb(b, 1);
		}
	}
}
