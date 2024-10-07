/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:41:12 by ayoub             #+#    #+#             */
/*   Updated: 2024/10/07 19:51:24 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;
    while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == ' '))
        i++;
    while ((nptr[i] == '-') || (nptr[i] == '+'))
    {
        if (nptr[i] == '-')
            sign *= -1;
        i++;
    }
    while(nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = result * 10 + (nptr[i] - '0');
        i++;
    }
    return (result * sign);
}