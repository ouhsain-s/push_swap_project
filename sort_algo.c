/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 10:22:20 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/29 11:09:21 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int sempel_sort(node **a, node **b)
{
    int count;

    if (!a || !b || !*a)
        return (0);
    if (!(*a)->next)
        return (0);
    count = 0;
    while (*a)
    {
        if((*a)->rank == count)
        {
            pb(a, b, 1);
            count++;
        }
        else
            ra(a,1);
    }
    while (*b)
    {
        pa(b, a, 1);
    }
    return (1);
}

int sort_valuse_BYtow_stacks(node **a, node  **b)
{
    size_t  size_a;

    size_a = size_ln(a);
    if (size_a < 5)
        return (sempel_sort(a, b));
    else if ()
    
}