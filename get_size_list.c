/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 16:56:04 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/28 17:00:16 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t  size_ln(node *head)
{
    size_t  count;
    
    count = 0;
    while (head)
    {
        head = head->next;
        count++;
    }
    return (count);
}