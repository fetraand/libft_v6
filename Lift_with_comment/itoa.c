/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 08:59:21 by fetraand          #+#    #+#             */
/*   Updated: 2026/02/11 08:59:25 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fonction auxiliaire : calculer la longueur d'un nombre
static size_t	ft_numlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)  // Pour le signe négatif ou zéro
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

// Fonction principale
char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long long	num;

	// 1. Calculer la longueur nécessaire
	len = ft_numlen(n);
	
	// 2. Allouer la mémoire
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	
	// 3. Traiter le cas spécial INT_MIN
	num = n;
	if (n < 0)
		num = -(long long)n;
	
	// 4. Terminer la chaîne avec \0
	str[len] = '\0';
	
	// 5. Remplir la chaîne de droite à gauche
	while (len--)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	
	// 6. Ajouter le signe '-' si nécessaire
	if (n < 0)
		str[0] = '-';
	
	// 7. Retourner la chaîne
	return (str);
}
