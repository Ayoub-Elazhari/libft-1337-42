/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:57:16 by ayoub             #+#    #+#             */
/*   Updated: 2024/10/10 20:34:28 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  i;
    size_t  str_len;

    if (!s)
        return (NULL);
    str_len = ft_strlen(s);
    if (start > str_len)
        return ((char *)malloc(1));
    if (len > start - str_len)
        len = start - str_len;
    substr = (char *)malloc(len + 1);
    if (!substr)
        return (NULL);
    i = 0;
    while (i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    return (substr);
}