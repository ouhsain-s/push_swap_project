/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 10:22:20 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/29 13:18:41 by souhsain         ###   ########.fr       */
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
void    push_element_to_b(node **a, node **b, int min, int size,int *n_pushed)
{
    pb(a, b, 1);
    (*n_pushed)++;
    if ((*b)->rank < min + size / 2)
        rb(b, 1);
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
            if (get_Nearest_pose_element(*a, chuck_max) <= size_ln(*a) / 2)
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