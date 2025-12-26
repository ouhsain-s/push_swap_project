/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 16:06:52 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/26 15:42:30 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	insert_AT_end(node **head, int value)
{
		node *new_node;
		node *current;

		new_node = malloc(sizeof(node));
		if (!new_node)
			return (0);
		new_node->next = NULL;
		new_node->value = value;
		
		if(!*head)
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

int	is_complet_number(char *s, int j)
{
	if (j == 0)
		return (0);
	if (ft_isdigit(s[j - 1]) && !ft_isdigit(s[j]))
		return (1);
	if (s[j + 1] == '\0' && ft_isdigit(s[j]))
		return(1);
	return (0);
}
static int	counvert_num(char *arg, node **head, int *start, int j)
{
	int	value;

	value = ft_atoi(ft_substr(arg, *start, j - *start + 1));
	if ((value == -1))
	{
		if (!ft_strnstr(arg, "-1", j - *start + 1))
			return(0);
	}	
	if (!insert_AT_end(head, value))
		return (0);
	*start  = j + 1;
	return (1);
}
int	add_numbers_tostack(node **head, int num_s, char ** arr_s)
{
	int		i;
	int		j;
	int		start;
	
	i = 1;
	while (i < num_s)
	{
		j = 0;
		start = 0;
		while (arr_s[i][j] != '\0')
		{
			if (!is_recognized_char_in_string(arr_s[i], j))
				return(0);
			if (is_complet_number(arr_s[i], j))
			{
				if (!counvert_num(arr_s[i], head, &start, j))
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
