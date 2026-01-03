/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 10:47:00 by souhsain          #+#    #+#             */
/*   Updated: 2026/01/03 15:29:30 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	wrong_sorting(t_node *a, t_node *b)
{
	write(1, "Error\n", 6);
	free_nodes(a);
	free_nodes(b);
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!add_numbers_tostack(&a, argc, argv))
	{
		wrong_sorting(a, b);
		return (1);
	}
	if (!sort_valuse_bytow_stacks(&a, &b))
	{
		wrong_sorting(a, b);
		return (1);
	}
	free_nodes(a);
	return (0);
}
