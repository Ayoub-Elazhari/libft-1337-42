/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:54:31 by ayoub             #+#    #+#             */
/*   Updated: 2024/10/07 10:54:32 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  len_dst;
    size_t  len_src;

    len_dst = 0;
    while (dst[len_dst] != '\0')
        len_dst++;
    len_src = 0;
    while (src[len_src])
        len_src++;
    if (size <= len_dst)
        return (len_dst + len_src);
    i = len_dst;
    j = 0;
    while (src[j] != '\0' && (i + 1) < size)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (len_dst + len_src);
}