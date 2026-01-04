/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_elements_to_b.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:05:13 by souhsain          #+#    #+#             */
/*   Updated: 2026/01/04 11:55:36 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	push_element_to_b(t_node **a, t_node **b, int min, int size)
{
	pb(a, b, 1);
	if ((*b)->rank < min + (size / 2))
		rb(b, 1);
	return (1);
}

//that function is unused but it's useful in other cases
int	get_nearest_chuck_pose(t_node *stack, int chuck_max)
{
	int		count_from_first;
	int		count_from_last;
	t_node	*revers_stack;

	revers_stack = stack;
	count_from_last = 0;
	count_from_first = 0;
	while (stack)
	{
		if (stack->rank <= chuck_max)
			break ;
		count_from_first++;
		stack = stack->next;
	}
	while (revers_stack->next)
		revers_stack = revers_stack->next;
	while (revers_stack)
	{
		if (revers_stack->rank <= chuck_max)
			break ;
		count_from_last++;
		revers_stack = revers_stack->previous;
	}
	return (count_from_last - count_from_first);
}

void	push_all_elements_to_b(t_node **a, t_node **b, int chuck_size)
{
	int	chuck_max;
	int	chuck_min;
	int	num_pushed;

	num_pushed = 0;
	chuck_min = 0;
	chuck_max = chuck_size -1;
	while (*a)
	{
		if ((*a)->rank <= chuck_max)
			num_pushed += push_element_to_b(a, b, chuck_min, chuck_size);
		else
			ra(a, 1);
		if (num_pushed == chuck_max + 1)
		{
			chuck_min = chuck_max + 1;
			chuck_max += chuck_size;
		}
	}
}
