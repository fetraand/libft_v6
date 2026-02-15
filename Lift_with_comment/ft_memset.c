/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:38:46 by fetraand          #+#    #+#             */
/*   Updated: 2026/02/03 10:07:04 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *str;
	str = (unsigned char *)s;
/*

str = (unsigned char *)s; 

    Cast (conversion) du pointeur void* en unsigned char* , nécessaire car on ne peut pas déréférencer un void *

    Le pointeur str ne pointe pas SUR le pointeur s, il pointe VERS LA MÊME ADRESSE que s

    C'est ce qu'on appelle un alias : deux pointeurs différents pointant vers la même mémoire
*/	
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

int	main(void)
{
	char	txt[] = "fetraand";

	ft_memset(txt, 'x', 5);
	printf ("%s", txt);
}
