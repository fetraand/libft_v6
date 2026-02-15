/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:06:55 by fetraand          #+#    #+#             */
/*   Updated: 2026/02/03 17:07:59 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t	i;

	if (!dest || !src)
		return (NULL);
	
	d= (unsigned char *)dest;
	s= (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// Copier une chaîne :
int main(void)
{
    char src[10] = "fetra";
    char dest[10];
    ft_memcpy(dest, src, ft_strlen(src) + 1);  // +1 pour le \0
	printf("%s",dest);
    return (0);
}
// Copier un tableau :

int main(void)
{
    int src[] = {1, 2, 3, 4, 5};
    int dest[5];
    
    // Copie tout le tableau
    memcpy(dest, src, sizeof(src));
    
    for (int i = 0; i < 5; i++)
        printf("%d ", dest[i]);  // 1 2 3 4 5
    
    return 0;
}
//  Copier partielle :
int main(void)
{
    char message[] = "ABCDEFGHIJ";
    char buffer[20] = {0};
    
    // Copie seulement "DEF"
    memcpy(buffer, message + 3, 3);
    
    printf("Copie: %s\n", buffer);  // DEF
    
    return 0;
}
// Pour structs :
typedef struct {
    int id;
    char name[20];
    float score;
} Student;

int main(void)
{
    Student student1 = {123, "Alice", 95.5};
    Student student2;
    
    // Copie toute la structure
    memcpy(&student2, &student1, sizeof(Student));
    
    printf("Copied: ID=%d, Name=%s, Score=%.1f\n",
           student2.id, student2.name, student2.score);
    
    return 0;
}

