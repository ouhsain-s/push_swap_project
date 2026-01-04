/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 10:22:20 by souhsain          #+#    #+#             */
/*   Updated: 2026/01/04 20:17:07 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_stack_sorted(t_node *stack)
{
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

static int	sempel_sort(t_node **a, t_node **b, size_t size_a)
{
	if (size_a == 2)
		sort_tow_values(a);
	if (size_a == 3)
		sort_three_values(a);
	if (size_a == 4)
		sort_four_values(a, b);
	if (size_a == 5)
		sort_five_values(a, b);
	return (1);
}

static int	sort_by_chucks(t_node **a, t_node **b, size_t size_a)
{
	int	chuck_size;

	if (!a || !b || !*a)
		return (0);
	if (!(*a)->next)
		return (0);
	if (size_a <= 100)
		chuck_size = 17;
	else
		chuck_size = 45;
	push_all_elements_to_b(a, b, chuck_size);
	return_sorted_elements_to_a(a, b);
	return (1);
}

int	sort_valuse_bytow_stacks(t_node **a, t_node **b)
{
	size_t	size_a;

	size_a = size_ln(*a);
	if (is_stack_sorted(*a))
		return (1);
	if (size_a <= 5)
		return (sempel_sort(a, b, size_a));
	if (!ranking_nodes(*a))
		return (0);
	return (sort_by_chucks(a, b, size_a));
}
