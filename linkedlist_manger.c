/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist_manger.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 13:26:49 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/30 11:20:00 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ranking_nodes(node *head)
{
	node	*nested;
	node	*least;
	size_t	size;
	size_t	count;
	if (!head)
		return (0);
	size = size_ln(head);
	count = 0;
	while (count < size)
	{
		nested = head;
		least = NULL;
		while (nested)
		{
			if (nested->rank == -1 && (!least || nested->value < least->value))
				least = nested;
			nested = nested->next;
		}
		least->rank = count;
		count++;
	}
	return (1);
}

int swap_value_with_next(node **head)
{
	int tmp_value;
	int	tmp_rank;
	
	if (!head)
		return (0);
	if (*head != NULL && (*head)->next != NULL)
	{
		tmp_value = (*head)->value;
		tmp_rank = (*head)->rank;
		(*head)->value = (*head)->next->value;
		(*head)->rank = (*head)->next->rank;
		(*head)->next->value = tmp_value;
		(*head)->next->rank = tmp_rank;
		return (1);
	}
	return (0);
}
int transfer_first_node(node **src, node **dest)
{
	node *current;
	
	if(!src || !*src || !dest)
		return (0);
	current = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->previous = NULL;
	current->next = *dest;
	if (*dest)
		(*dest)->previous = current;
	*dest = current;
	return (1);
}
int rotate_nodes(node **head)
{
	node    *new_first;
	node    *last;
	
	if (!head || !*head|| !(*head)->next)
		return (0);
	new_first = (*head)->next;
	last = new_first;
	while (last->next)
	{
		last = last->next;
	}
	last->next = (*head);
	(*head)->next = NULL;
	(*head)->previous = last;
	*head = new_first;
	(*head)->previous = NULL;
	return (1);
}
int revers_rotate_nodes(node **head)
{
	node    *last;
	
	if (!head || !*head || !(*head)->next)
		return (0);
	last = *head;
	while (last->next)
	{
		last = last->next;
	}
	last->previous->next = NULL;
	last->next = *head;
	last->previous = NULL;
	(*head)->previous = last;
	*head = (*head)->previous;
	return (1);
}