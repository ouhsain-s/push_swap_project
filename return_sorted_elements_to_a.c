/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_sorted_elements_to_a.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:56:45 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/29 15:57:38 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    get_pose_current_rank(node *stack, int rank_to_find)
{
    int count;

    count = 0;
    while (stack)
    {
        if (stack->rank == rank_to_find)
            break;
        count++;
        stack = stack->next;
    }
    return (count);
}

void    return_sorted_elements_to_a(node **a, node **b)
{
    int pose;
    int count;

    pose = 0;
    count = size_ln(*b) - 1;
    while (*b)
    {
        if ((*b)->rank == count)
        {
            pa(b, a, 1);
            count--;
           pose = get_pose_current_rank(*b, count);
        }
        else
        {
            if (pose <= (count + 1) / 2)
                rb(b, 1);
            else
                rrb(b, 1);
        }
    }
    
}