/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 16:06:52 by souhsain          #+#    #+#             */
/*   Updated: 2026/01/04 11:20:05 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	insert_at_end(t_node **head, int value)
{
	t_node	*new_node;
	t_node	*current;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (0);
	new_node->next = NULL;
	new_node->value = value;
	new_node->rank = -1;
	if (!*head)
	{
		new_node->previous = NULL;
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		new_node->previous = current;
		current->next = new_node;
	}
	return (1);
}

static int	is_complet_number(char *s, int j)
{
	if (j == 0 && s[j + 1] != '\0')
		return (0);
	if (s[j + 1] == '\0' && ft_isdigit(s[j]))
		return (1);
	if (ft_isdigit(s[j - 1]) && !ft_isdigit(s[j]))
		return (1);
	return (0);
}

static int	counvert_num(char *arg, t_node **head, int *start, int j)
{
	int	value;

	value = ft_atoi(ft_substr(arg, *start, j - *start + 1));
	if (value == -1)
	{
		if (!ft_strnstr(arg + *start, "-1", j - *start + 1))
			return (0);
	}
	if (!insert_at_end(head, value))
		return (0);
	*start = j + 1;
	return (1);
}

int	parsing_current_arg(t_node **head, char **arr_s, int i)
{
	int	j;
	int	start;

	start = 0 ;
	j = 0;
	while (arr_s[i][j] != '\0')
	{
		if (!is_recognized_char_in_string(arr_s[i], j))
			return (0);
		if (is_complet_number(arr_s[i], j))
		{
			if (!counvert_num(arr_s[i], head, &start, j))
				return (0);
		}
		j++;
	}
	return (start);
}

int	add_numbers_tostack(t_node **head, int num_s, char **arr_s)
{
	int		i;

	i = 1;
	while (i < num_s)
	{
		if (!parsing_current_arg(head, arr_s, i))
			return (0);
		i++;
	}
	if (!check_duplicate(*head))
		return (0);
	return (1);
}
