/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 21:29:05 by souhsain          #+#    #+#             */
/*   Updated: 2026/01/03 15:13:13 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_recognized_char_in_string(char *s, size_t index)
{
	if (ft_isdigit(s[index]))
		return (1);
	if (s[index] == '-' || s[index] == '+')
	{
		if (s[index + 1] == '0')
			return (0);
		if (ft_isdigit(s[index - 1]))
			return (0);
		if (ft_isdigit(s[index + 1]))
			return (1);
		else
			return (0);
	}
	if (s[index] == ' ')
		return (1);
	return (0);
}

int	check_duplicate(t_node *head)
{
	t_node	*tracker;

	if (!head)
		return (1);
	while (head->next != NULL)
	{
		tracker = head->next;
		while (tracker != NULL)
		{
			if (tracker->value == head->value)
				return (0);
			tracker = tracker->next;
		}
		head = head->next;
	}
	return (1);
}

void	free_nodes(t_node *head)
{
	t_node	*current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
