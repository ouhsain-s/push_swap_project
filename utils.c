/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 12:45:55 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/25 17:48:30 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     ft_isdigit(int d)
{
        if (d >= '0' && d <= '9')
                return (1);
        return (0);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        char    *psub;
        size_t  slen;

        if (!s)
                return (NULL);
        slen = ft_strlen(s);
        if (slen < start)
                return (ft_strdup(""));
        else if (start + len > slen)
                len = slen - start;
        psub = malloc(len + 1);
        if (!psub)
                return (NULL);
        ft_strlcpy(psub, (s + start), len + 1);
        return (psub);
}
