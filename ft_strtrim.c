/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:19:07 by ayoub             #+#    #+#             */
/*   Updated: 2024/10/16 20:13:11 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int isset(const char c, const char *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(const char *s1, const char *set)
{
    size_t  start;
    size_t  end;
    char    *trimmed_str;

    if (!s1 || !set)//  if string and set are empty
        return (NULL);
    start = 0;
    end = ft_strlen(s1);
    while (s1[start] && isset(s1[start], set))//    checking if set is in string
        start++;
    while (end > start && isset(s1[end - 1], set))//    checking if set is in string while end > start
        end--;
    //  if start equal to end that's mean we reach the target
    if (start == end)
    {
        trimmed_str = malloc(1);//  allocating place for the null charecter
        if (!trimmed_str)
            return (NULL);
        trimmed_str[0] = '\0';
        return (trimmed_str);
    }
    trimmed_str = malloc(end - start + 1);//    The plus 1 is for the null character that we did allocate a place for it
    if (!trimmed_str)
        return (NULL);
    ft_memcpy(trimmed_str, &s1[start], end - start);
    trimmed_str[end - start] = '\0';
    return (trimmed_str);
}