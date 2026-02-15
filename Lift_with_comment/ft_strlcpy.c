#include "libft.h"
#include <unistd.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size) // destsize
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

//strlcpy doit retourner la longueur de la chaîne source, pas le nombre de caractères copiés.
//Utilité : Savoir si la chaîne a été tronquée

/* 
Une chaîne est tronquée quand elle a été "coupée" car le buffer de destination 
était trop petit pour contenir la totalité de la source.
Allocation dynamique : Si tu vois que c'est tronqué, tu peux malloc un buffer 
plus grand (en utilisant justement la valeur de retour) et recommencer.
*/
