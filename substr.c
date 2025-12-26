/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 11:49:01 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/26 11:52:45 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t  ft_strlen(const char *s)
{
        size_t  count;

        count = 0;
        while (s[count] != '\0')
                count++;
        return (count);
}
char    *ft_strdup(const char *str)
{
        size_t  slen;
        size_t  count;
        char    *ps;

        if (!str)
                return (NULL);
        count = 0;
        slen = ft_strlen(str);
        ps = (char *)malloc(slen + 1);
        if (!ps)
                return (NULL);
        while (str[count] != '\0')
        {
                ps[count] = str[count];
                count++;
        }
        ps[count] = '\0';
        return (ps);
}
size_t  ft_strlcpy(char *dest, const char *src, size_t destsize)
{
        size_t  srclen;
        size_t  count;

        if (!src)
                return (0);
        if (!dest && destsize > 0)
                return (0);
        srclen = ft_strlen(src);
        count = 0;
        if (destsize == 0)
                return (srclen);
        while (count < destsize - 1 && src[count] != '\0')
        {
                dest[count] = src[count];
                count++;
        }
        dest[count] = '\0';
        return (srclen);
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