/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:02:37 by ayoub             #+#    #+#             */
/*   Updated: 2024/10/07 13:52:21 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    
    if (*little == '\0')
        return (char *)big;
    i = 0;
    while (big[i] != '\0' && i < len)
    {
        if (big[i] == little[0])
        {
            j = 0;
            while (little[j] != '\0' && (i + j) < len)
            {
                if (big[i + j] != little[j])
                    break;
                j++;
            }
        }
        if (little[j] == '\0')
            return((char *)&big[i]);
    }
    return (NULL);
}