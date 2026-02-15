#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);  // Différence ASCII entre minuscule et majuscule
	return (c);
}