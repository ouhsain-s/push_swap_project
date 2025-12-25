/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 10:48:27 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/25 17:33:48 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef push_swap_H
#define push_swap_H

#include <unistd.h>
#include <stdlib.h>

typedef struct st_stack
{
    int *data;
    int size;
    int content;
} t_stack;

#endif