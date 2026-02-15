#include <stdio.h>
#include <string.h>
void    *ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t	i;
	str = (unsigned char*)s;
	if (!s)
	{
		return (NULL);
	}
	i = 0;
	while(i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
int main(void)
{
	char txt[] = "heyyyy";
	ft_memset(txt, 'c', 2);
	//memset(txt, 'c', 2);
	printf("%s\n", txt);
}