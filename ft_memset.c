/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:54:22 by ayoub             #+#    #+#             */
/*   Updated: 2024/10/07 10:54:23 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *ptr1;
    size_t  i;

    ptr1 = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr1[i] = (unsigned char)c;
        i++;
    }
    return  (s);
}