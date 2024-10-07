/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:53:53 by ayoub             #+#    #+#             */
/*   Updated: 2024/10/07 10:55:26 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t      i;
    unsigned char   *ptr1;
    unsigned char   *ptr2;

    i = 0;
    ptr1 = (unsigned char *)s1;
    ptr2 = (unsigned char *)s2;
    while (i < n)
    {
        if (ptr1[i] != ptr2[i])
            return (ptr1[i] - ptr2[i]);
        i++;
    }
    return (0);
}