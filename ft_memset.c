#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *ptr1;
    size_t  i;

    ptr1 = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr1[i] = (unsigned char)c;
        i++;
    }
    return  (s);
}