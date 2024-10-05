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