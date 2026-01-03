/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 16:22:04 by souhsain          #+#    #+#             */
/*   Updated: 2026/01/03 15:13:13 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_node **a, int print_opirator)
{
    if (swap_value_with_next(a) && print_opirator)
        write (1,"sa\n", 3);
}

void    sb(t_node **b, int print_opirator)
{
    if (swap_value_with_next(b) && print_opirator)
        write (1,"sb\n", 3);
}
void    ss(t_node **a, t_node **b, int print_opirator)
{
    if (swap_value_with_next(a) && swap_value_with_next(b) && print_opirator)
        write (1,"ss\n", 3);
}