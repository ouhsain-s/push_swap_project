/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 10:47:00 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/25 18:12:07 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	counvert_num(char *s, t_stack stack, int *start, int j)
{
	stack.data[stack.content] = ft_atoi(ft_substr(s, *start, j - *start));			
	if (stack.content == stack.size - 1)
	{
		if (!realloc_size(500, stack));
			return (0);
	}
	if ((stack.data[stack.content] == -1) && !search_Minus_one(*start, j - *start ))
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

	if(!allocate_new_stack(stack, 1000))
		return(0);
	i = 1;
	while (i < num_s)
	{
		j = 1;
		start = 0;
		while (arr_s[i][j] != '\0')
		{
			if (!recognized_char(arr_s[i][j]))
			//chech is there is any operator excepet spases after digit or there is any extranios char ...etc
				return(0);
			if (ft_isdigit(arr_s[i][j - 1]) && !ft_isdigit(arr_s[i][j]))
			{
				if (!counvert_num(arr_s[1], stack, &start, j))
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
int	main(int argc, char **argv)
{
	t_stack a;
	t_stack b;

	if (argc < 2)
		return (1);
	add_numbers_tostack(a, argc, argv);
}