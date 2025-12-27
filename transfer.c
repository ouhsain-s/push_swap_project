/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transfer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 16:36:08 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/27 16:42:13 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pa(node **a, node **b, int print_operator)
{
    if (transfer_first_node(a, b) && print_operator)
        write(1, "pa\n", 3);
}

void    pb(node **b, node **a, int print_operator)
{
    if (transfer_first_node(b, a) && print_operator)
        write(1, "pb\n", 3);
}
