/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:54:19 by ayoub             #+#    #+#             */
/*   Updated: 2024/10/07 10:54:20 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t len)
{
    size_t  i;
    char    *ptr1;
    char    *ptr2;

    ptr1 = (unsigned char *)dest;
    ptr2 = (unsigned char *)src;
    if (!ptr1 && !ptr2)
        return NULL;
    i = 0;
    while (i < len)
    {
        ptr1[i] = ptr2[i];
        i++;
    }
    return (dest);
}