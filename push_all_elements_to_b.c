/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_elements_to_b.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:05:13 by souhsain          #+#    #+#             */
/*   Updated: 2026/01/02 14:04:23 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_element_to_b(node **a, node **b, int min, int size,int *n_pushed)
{
    pb(a, b, 1);
    (*n_pushed)++;        
     if ((*b)->rank < min + (size / 2))
         rb(b, 1);//printf("iam\n");
}

int    get_nearest_chuck_pose(node *stack, int chuck_max)
{
    int count_from_first;
    int count_from_last;
    node    *revers_stack;
    
    revers_stack = stack;
    count_from_last = 0;
    count_from_first = 0;
    while (stack)
    {
        if (stack->rank <= chuck_max)
            break;
        count_from_first++;
        stack = stack->next;
    }
    while (revers_stack->next)
        revers_stack = revers_stack->next;
    while (revers_stack)
    {
        if (revers_stack->rank <= chuck_max)
            break;
        count_from_last++;
        revers_stack = revers_stack->previous;
    }
    return (count_from_last - count_from_first);
}
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
int    push_fist_chuck_sorted(node **a, node **b, int chuck_max)
{
    int count;
    int current_rank;
    int rm;
    
    current_rank = 0;
    while (current_rank <= chuck_max)
    {
        count = get_pose_current_rank(a, current_rank);
        if (count <= chuck_max / 2)
        {
            while (count--)
                ra(a, 1);
        }
        else
        {
            while (chuck_max + 1 - count++)
                rra(a, 1);
        }
        pb(a, b, 1);
        current_rank++;
    }
    return(current_rank);
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
        if (chuck_min == 0)
           num_pushed = push_fist_chuck_sorted(a, b, chuck_max);
        if ((*a)->rank <= chuck_max)
            push_element_to_b(a, b, chuck_min, chuck_size, &num_pushed);
        else
        {
            // if (get_nearest_chuck_pose(*a, chuck_max) < (int)size_ln(*a) / 2)
            //     ra(a, 1);
            // else
            //     rra(a, 1);

            if (get_nearest_chuck_pose(*a, chuck_max) >= 0)
                ra(a, 1);
            else
                rra(a, 1);
            // printf("%ld", size_ln(*a));
            // printf("\nnearest = %d B = %d\n", get_nearest_chunk_pos(*a, chuck_max), (*a)->value),sleep(600);
            // ra(a, 1);
        }
        if (num_pushed == chuck_max + 1)
        {
            //printf("min = %d   max = %d\n", chuck_min, chuck_max);
            //print_stack(*b, 'b');
            // sleep(10);
            chuck_min = chuck_max + 1;
            chuck_max += chuck_size;
        }
    }
    
}
