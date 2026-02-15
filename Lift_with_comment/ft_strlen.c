/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:28:03 by fetraand          #+#    #+#             */
/*   Updated: 2026/02/08 09:56:06 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

size_t ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
		i++;

	return (i);
}

int main(void)
{
	const char txt[] = "fetra and";
	printf("%zu", ft_strlen(txt));

/*

    z → spécificateur pour size_t (introduit en C99)

    u → pour "unsigned" (non signé)

    %zu = "format pour un size_t non signé"
      
*/


}


