#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char   *ptr1;
    size_t  i;

    i = 0;
    ptr1 = (unsigned char *)s;
    while (i < n)
    {
        ptr1[i] = 0;
        i++;
    }
}