#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}


int main(void)
{
    const char *original = "Hello, 42!";
    char *duplicate;
    
    // Dupliquer la chaîne
    duplicate = strdup(original);
    
    if (!duplicate)
    {
        printf("Erreur d'allocation mémoire!\n");
        return (1);
    }
    
    printf("Original : '%s'\n", original);
    printf("Copie    : '%s'\n", duplicate);
    
    // Modifier la copie (sans affecter l'original)
    duplicate[7] = '2';
    duplicate[8] = '4';
    
    printf("\nAprès modification:\n");
    printf("Original : '%s'\n", original);  // Inchangé
    printf("Copie    : '%s'\n", duplicate); // Modifié
    
    // Libérer la mémoire allouée par strdup
    free(duplicate);
    
    return (0);
}
