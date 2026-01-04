/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sempel_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:51:49 by souhsain          #+#    #+#             */
/*   Updated: 2026/01/04 20:15:38 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_pose_least_value(t_node *a)
{
	int		pose;
	t_node	*least;
	t_node	*b;

	b = a;
	least = NULL;
	pose = 0;
	while (a)
	{
		if (!least || a->value < least->value)
			least = a;
		a = a->next;
	}
	while (b)
	{
		if (least->value == b->value)
			break ;
		pose++;
		b = b->next;
	}
	return (pose);
}

void	sort_tow_values(t_node **a)
{	
	if ((*a)->value > (*a)->next->value)
		sa(a, 1);
}

void	sort_three_values(t_node **a)
{
	sort_tow_values(a);
	if ((*a)->next->value > (*a)->next->next->value)
	{
		rra(a, 1);
		sort_tow_values(a);
	}
}

void	sort_four_values(t_node **a, t_node **b)
{
	int	pose;

	pose = get_pose_least_value(*a);
	if (pose == 1)
		ra(a, 1);
	if (pose == 2)
	{
		ra(a, 1);
		ra(a, 1);
	}
	if (pose == 3)
		rra(a, 1);
	pb(a, b, 1);
	sort_three_values(a);
	pa(b, a, 1);
}

void	sort_five_values(t_node **a, t_node **b)
{
	int	pose;

	pose = get_pose_least_value(*a);
	if (pose == 1)
		ra(a, 1);
	if (pose == 2)
	{
		ra(a, 1);
		ra(a, 1);
	}
	if (pose == 3)
	{
		rra(a, 1);
		rra(a, 1);
	}
	if (pose == 4)
		rra(a, 1);
	pb(a, b, 1);
	sort_four_values(a, b);
	pa(b, a, 1);
}
