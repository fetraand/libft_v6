#include <stdio.h>

size_t count_word(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count ++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

int	main (void)
{
	char txt[] = "fetra,,andria,";
	printf ("%zu", count_word(txt, ','));
}