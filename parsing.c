/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 21:29:05 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/26 16:44:25 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_recognized_char_in_string(char *s, size_t index)
{
	if( ft_isdigit(s[index]))
		return (1);
	if (s[index] == '-' || s[index] == '+')
	{
		if (ft_isdigit(s[index - 1]))
			return (0);
		if (ft_isdigit(s[index + 1]))
			return (1);
		else
			return (0);
	}
	if (s[index] == ' ')
            return (1);		
	return (0);
}
