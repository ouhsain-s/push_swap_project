/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 10:22:20 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/29 12:09:46 by souhsain         ###   ########.fr       */
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

void    push_all_elements_to_b(node **a, node **b, int chuck_size)
{
    int chuck_max;
    int chuck_min;
    int ;
    
    chuck_max = 0;
    chuck_max = chuck_size;
    while (*a)
    {
        if ((*a)->rank < chuck_max)
        {
            pb(a, b, 1);
            if ((*b)->rank < chuck_min + chuck_size / 2)
                rb(b, 1);
            else
                rrb(b, 1);
        }
        else
        {
            if (get_Nearest_pose_element() < size_ln(*a) / 2)
                ra(a, 1);
            else
                rra(a, 1);
        }
    }
    
}
int sort_by_chucks(node **a, node **b, size_t size_a)
{
    int num_of_chucks;
    int chuck_size;
    
    if (size_a <= 100)
        chuck_size = 20;
    else
        chuck_size = 45;
    
    push_all_elements_to_b();
    
        
}
int sort_valuse_BYtow_stacks(node **a, node  **b)
{
    size_t  size_a;

    size_a = size_ln(a);
    if (size_a < 5)
        return (sempel_sort(a, b));
    else if ()
    
}