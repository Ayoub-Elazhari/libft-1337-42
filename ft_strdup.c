/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:16:18 by ayoub             #+#    #+#             */
/*   Updated: 2024/10/07 20:22:28 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    int i;
    char    *new;

    i = 0;
    while (s[i])
        i++;
    new = (char *)malloc((i + 1) * sizeof(char));
    if (!new)
        return (NULL);
    while (s[i])
    {
        new[i] = s[i];
        i++;
    }
    new[i] = '\0';
    return (new);
}