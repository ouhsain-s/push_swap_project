/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 16:06:52 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/25 17:38:53 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int allocate_new_stack(t_stack stack, int size)
{
    stack.data = malloc(sizeof(int) * size);
    if (!stack.data)
        return (0);
	stack.size = size;
	stack.content = 0;
    return (1);
}
int realoc_stack(int size, t_stack stack)
{
    int     new_size;
    int     count;
    char    *old_arr;
    
    new_size = stack.size + size;
    if (new_size <= 0)
        return (0);
    old_arr = stack.data;
    stack.data = malloc(sizeof(int) * new_size);
    if(!stack.data)
    {
        stack.data = old_arr;
        return(0);
    }
    stack.size = new_size;
    count = 0;
    while (count < stack.content)
    {
        stack.data[count] = old_arr[count];
        count++;
    }
    free(old_arr);
    return(1);
}
