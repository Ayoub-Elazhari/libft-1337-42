/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:05:31 by ayoub             #+#    #+#             */
/*   Updated: 2024/10/07 14:28:12 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(214748364, fd);
        ft_putchar_fd('8', fd);
        return;
    }
    else if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    else if(n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
    }
    ft_putchar_fd((n % 10)+ '0', fd);
}