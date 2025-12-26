/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 12:45:55 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/26 11:49:59 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     ft_isdigit(int d)
{
        if (d >= '0' && d <= '9')
                return (1);
        return (0);
}


char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
        size_t  c_haystack;
        size_t  c_needle;

        if (!haystack || !needle)
                return (NULL);
        if (*needle == '\0')
                return ((char *)haystack);
        c_haystack = 0;
        while (haystack[c_haystack] != '\0' && c_haystack < len)
        {
                c_needle = 0;
                while (needle[c_needle] != '\0' && (c_haystack + c_needle) < len)
                {
                        if (haystack[c_haystack + c_needle] != needle[c_needle])
                                break ;
                        c_needle++;
                }
                if (needle[c_needle] == '\0')
                        return ((char *)(haystack + c_haystack));
                c_haystack++;
        }
        return (NULL);
}
