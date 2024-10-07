/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:53:03 by ayoub             #+#    #+#             */
/*   Updated: 2024/10/07 20:13:17 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;
    size_t  i;

    i = 0;
    ptr = (void *)malloc(size * nmemb);
    if (!ptr)
        return (NULL);
    while (i < (size * nmemb))
    {
        ((unsigned char *)ptr)[i] = 0;
        i++;
    }
    return (ptr);
}