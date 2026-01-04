/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 10:22:20 by souhsain          #+#    #+#             */
/*   Updated: 2026/01/04 11:46:11 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sempel_sort(t_node **a, t_node **b)
{
	int	count;

	if (!a || !b || !*a)
		return (0);
	if (!(*a)->next)
		return (1);
	count = 0;
	while (*a)
	{
		if ((*a)->rank == count)
		{
			pb(a, b, 1);
			count++;
		}
		else
			ra(a, 1);
	}
	while (*b)
	{
		pa(b, a, 1);
	}
	return (1);
}

int	sort_by_chucks(t_node **a, t_node **b, size_t size_a)
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
	if (!ranking_nodes(*a))
		return (0);
	if (size_a <= 6)
		return (sempel_sort(a, b));
	else
		return (sort_by_chucks(a, b, size_a));
}
