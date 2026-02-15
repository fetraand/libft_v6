#include <stdio.h>
#include <string.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    const unsigned char *s;
    unsigned char *d;

    s = (const unsigned char *)src;
    d = (unsigned char *)dest;
    
    if (d > s)
    {
        i = n;
        while (i > 0)
        {   
            i--;
            d[i] = s[i];
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}

int main (void)
{
    char txt[] = "ABCDEFGH";

    printf("%p\n%p", txt[0], txt[1]);
}