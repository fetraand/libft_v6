/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 08:12:21 by fetraand          #+#    #+#             */
/*   Updated: 2026/02/03 08:32:00 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<string.h>
#include<stdio.h>

/*
void *ft_memset(void *s, int c, size_t n)
{
	
}
*/

int	main(void)
{
	char	txt[] = "fetraand";
	int scores[10];

	memset(txt, 0, 5);
	memset(scores, 0, sizeof(scores));

	int i;
	i = 0;
/*	while (i < 8)
	{
		printf("%d", txt[i]);
		i++;
	}
*/	
	while (i < 10)
    {
        printf("%d", scores[i]);
        i++;
    }

}
