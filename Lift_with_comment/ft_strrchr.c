#include "libft.h"

/*
strrchr recherche la dernière occurrence d'un caractère dans une chaîne.
Elle retourne un pointeur vers cette occurrence, ou NULL si le caractère n'est pas trouvé.
*/

char	*ft_strrchr(const char *s, int c)
{
	const char	*end;
	unsigned char	uc;

	uc = (unsigned char)c;
	
	// Trouver la fin de la chaîne
	end = s;
	while (*end)
		end++;
	
	// Rechercher depuis la fin vers le début
	while (end >= s)
	{
		if (*end == uc)
			return ((char *)end);
		end--;
	}
	return (NULL);
}

int main(void)
{
    const char *text = "Hello, World! Hello again!";
    char *result;
    
    // Recherche du dernier 'o'
    result = strrchr(text, 'o');
    if (result)
        printf("Dernier 'o' à la position: %ld\n", result - text);
    else
        printf("'o' non trouvé\n");
}
