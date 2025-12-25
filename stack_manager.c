/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 16:06:52 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/25 21:25:11 by souhsain         ###   ########.fr       */
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

int	is_complet_number(char *s, int j)
{
	if (j == 0)
		return (0);
	if (ft_isdigit(s[j - 1]) && !ft_isdigit(s[j]))
		return (1);
	if (s[j + 1] == '\0' && ft_isdigit(s[j]))
		return(1);
	return (0);
}
static int	counvert_num(char *s, t_stack stack, int *start, int j)
{
	stack.data[stack.content] = ft_atoi(ft_substr(s, *start, j - *start + 1));			
	if (stack.content == stack.size - 1)
	{
		if (!realloc_size(500, stack));
			return (0);
	}
	if ((stack.data[stack.content] == -1) && !search_Minus_one(*start, j - *start + 1))
	//create function that search -1 in string provided to it 
	
		return (0);
	stack.content++;
	*start  = j + 1;
	return (1);
}
int	add_numbers_tostack(t_stack stack, int num_s, char ** arr_s)
{
	int		i;
	int		j;
	int		start;

	if (!allocate_new_stack(stack, 1000))
		return(0);
	i = 1;
	while (i < num_s)
	{
		j = 0;
		start = 0;
		while (arr_s[i][j] != '\0')
		{
			if (!is_recognized_char(arr_s[i], j))
				return(0);
			if (is_complet_number(arr_s[i], j))
			{
				if (!counvert_num(arr_s[i], stack, &start, j))
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
