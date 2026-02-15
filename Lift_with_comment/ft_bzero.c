/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 08:12:21 by fetraand          #+#    #+#             */
/*   Updated: 2026/02/03 11:14:05 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<strings.h>
#include <stdio.h>
#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *str;
	str = (unsigned char *)s;

	if (!s)
		return ;

	i = 0;
	while (i < n)
	{
		str[i] = 0; // '\0' en ascii
		i++;
	}
}

int main(void)
{
	char txt[] = "fetraand";
	ft_bzero(txt, 2);
	printf("%c",txt[2]);
}
/*
UTILISATION DE L ORIGINALE

int main(void)
{
    char str1[20] = "Hello World!";
    
	printf("Avant bzero: %s\n", str1);
	
	bzero(str1, 3);
    
	printf("Après bzero: %s\n", str1);
	
	printf("Après bzero: %c\n", str1[2]); pour voir le 3ème caractère
*/

/* 
	Pourquoi printf n'affiche rien ?

    En C, les chaînes de caractères sont terminées par un caractère nul ('\0')

    printf s'arrête au premier caractère nul rencontré

    Comme le tout premier caractère est maintenant '\0', printf affiche une chaîne vide
*/
