#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*end;
	unsigned char	uc;

	uc = (unsigned char)c;
	
	end = s;
	while (*end)
		end++;
	
	while (end >= s)
	{
		if (*end == uc)
			return ((char *)end);
		end--;
	}
	return (NULL);
}