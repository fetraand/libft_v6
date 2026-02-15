#include<stdio.h>
#include<string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s) // d > s : destination est après la source dans la mémoire ; 
	{
		// Copie de la fin vers le début
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		// Copie normale
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

int main(void)
{
	char buffer[] = "ABCDEFGH";
	memmove(buffer, buffer + 3, 3);
	printf("%s\n", buffer);
}
