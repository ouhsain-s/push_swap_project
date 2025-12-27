/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 16:42:39 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/27 16:47:41 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(node **a, int print_operator)
{
    if (rotate_nodes(a) && print_operator)
        write (1, "ra\n", 3);
}

void    rb(node **b, int print_operator)
{
    if (rotate_nodes(b) && print_operator)
        write (1, "rb\n", 3);
}

void    rr(node **a, node **b, int print_operator)
{
    if (rotate_nodes(a) && rotate_nodes(b) && print_operator)
        write (1, "rr\n", 3);
}
