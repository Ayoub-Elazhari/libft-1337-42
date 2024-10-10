/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:19:07 by ayoub             #+#    #+#             */
/*   Updated: 2024/10/10 20:43:19 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

int isset(char c, const char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (c == s[i])
            return (1);
        i++;
    }
    return (0);
}
char    *ft_strtrim(char const *s1, char const *set)
{
    char    *new;
    int i;
    size_t  end;
    
    i = 0;
    end = ft_strlen(s1);
    if (!s1 || !set)
        return (NULL);
    while (s1[i] && isset[s1[i - 1], set])
        i++;
    while (end > 0 && isset(s1[end - 1], set))
        end--;
    new = (char *)malloc(sizeof(char) * (end + 1));
    if (!new)
        return (NULL);
    ft_strncpy(new, s1, set);
    new = '\0';
    return new;
}