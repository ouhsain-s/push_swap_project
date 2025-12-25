/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 21:29:05 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/25 21:31:01 by souhsain         ###   ########.fr       */
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