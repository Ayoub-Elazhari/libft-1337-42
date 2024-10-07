/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:54:11 by ayoub             #+#    #+#             */
/*   Updated: 2024/10/07 10:54:12 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t      i;
    unsigned char   *ptr;

    i = 0;
    ptr = (unsigned char *)s;
    while (i < n)
    {
        if ((unsigned char)c == ptr[i])
            return (&ptr[i]);
        i++;
    }
    return (NULL);
}