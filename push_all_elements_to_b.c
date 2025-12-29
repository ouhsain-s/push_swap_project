/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_elements_to_b.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:05:13 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/29 16:36:33 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_element_to_b(node **a, node **b, int min, int size,int *n_pushed)
{
    pb(a, b, 1);
    (*n_pushed)++;
    if ((*b)->rank < min + size / 2)
        rb(b, 1);
}

int    get_nearest_chuck_pose(node *stack, int chuck_max)
{
    int count;

    count = 0;
    while (stack)
    {
        if (stack->rank <= chuck_max)
            break;
        count++;
        stack = stack->next;
    }
    return (count);
}

void    push_all_elements_to_b(node **a, node **b, int chuck_size)
{
    int chuck_max;
    int chuck_min;
    int num_pushed;
    
    num_pushed = 0;
    chuck_min = 0;
    chuck_max = chuck_size -1;
    while (*a)
    {
        if ((*a)->rank <= chuck_max)
            push_element_to_b(a, b, chuck_min, chuck_size, &num_pushed);
        else
        {
            if (get_nearest_chuck_pose(*a, chuck_max) <= (int)size_ln(*a) / 2)
                ra(a, 1);
            else
                rra(a, 1);
        }
        if (num_pushed == chuck_max + 1)
        {
            chuck_min = chuck_max + 1;
            chuck_max += chuck_size;
        }
    }
    
}