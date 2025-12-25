/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhsain <souhsain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 12:49:01 by souhsain          #+#    #+#             */
/*   Updated: 2025/12/25 17:54:39 by souhsain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static  int     ft_isspace(char c)
{
        if ((c >= 9 && c <= 13) || c == 32)
                return (1);
        return (0);
}

static  int     check_overflow(long *num, long tmp, int sign)
{
        if (*num / 10 != tmp)
        {
                if (sign == -1)
                        *num = 0;
                else
                        *num = -1;
                return (1);
        }
        return (0);
}

int     ft_atoi(const char *str)
{
        int             count;
        int             sign;
        long    num;
        long    tmp;

        num = 0;
        sign = 1;
        count = 0;
        while (ft_isspace(str[count]))
                count++;
        if (str[count] == '-')
                sign = -1;
        if (str[count] == '+' || str[count] == '-')
                count++;
        while (str[count] != '\0' && ft_isdigit(str[count]))
        {
                tmp = num;
                num = (num * 10) + (str[count] - '0');
                if (check_overflow(&num, tmp, sign))
                        return (num);
                count++;
        }
        return (num * sign);
}
