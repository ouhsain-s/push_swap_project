/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 10:47:00 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/25 21:24:51 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_recognized_char_in_string(char *s, size_t index)
{
	if( ft_isdigit(s[index]))
		return (1);
	if (s[index] == '-' || s[index] == '+')
	{
		if (ft_isdigit(s[index + 1]))
			return (1);
	}
	if ((s[index] >= 9 && s[index] <= 13) || s[index] == 32)
            return (1);		
	return (0);
}


int	main(int argc, char **argv)
{
	t_stack a;
	t_stack b;

	if (argc < 2)
		return (1);
	add_numbers_tostack(a, argc, argv);
}