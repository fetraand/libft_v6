#include <stdio.h>
#include <string.h>
// size_t : Type non signé pour les tailles/mémoire
// const char *s : pointeur vers des caractères qu'on ne peut pas modifier

size_t  ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
int	main(void)
{
	char *txt = "Fetra Andria";
	char txt1[] = "fetraand";
	printf("%zu\n%zu\n", ft_strlen(txt),ft_strlen(txt1));
}