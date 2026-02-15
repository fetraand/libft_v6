#include <stdio.h>
#include <string.h>

// strchr  - première occurrence
// strrchr - dernière occurrence
// strstr  - première occurrence d'une sous-chaîne
// memchr  - recherche dans une zone mémoire (pas seulement chaînes)

/*
strchr recherche la première occurrence d'un caractère dans une chaîne.
Elle retourne un pointeur vers cette occurrence, ou NULL si le caractère n'est pas trouvé.
*/

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*s)
	{
		if (*s == uc)
			return ((char *)s);
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return (NULL);
}

int main(void)
{
    const char *text = "Hello, World!";
    char *result;
    
    // Recherche du 'o'
    result = ft_strchr(text, 'o');
    if (result)
        printf("Trouvé 'o' à la position: %ld\n", result - text);
    else
        printf("'o' non trouvé\n");
    // Sortie: Trouvé 'o' à la position: 4
    
    // Recherche d'un caractère inexistant
    result = ft_strchr(text, 'z');
    if (!result)
        printf("'z' non trouvé\n");
    // Sortie: 'z' non trouvé
    
    // Recherche du terminateur nul
    result = ft_strchr(text, '\0');
    if (result)
        printf("Terminateur nul trouvé à la fin\n");
    
    return 0;
} 
