#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    const unsigned char *s;
    unsigned char       *d;
    size_t              i;

    s = (const unsigned char *)src;
    d = (unsigned char *)dest;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}

int main(void)
{
    char src[10] = "fetra";
    char dest[10] = "ABCDEFGHI";
    ft_memcpy(dest, src + 2, 3);  // +1 pour le \0
	printf("%s\n",dest);
    return (0);
}