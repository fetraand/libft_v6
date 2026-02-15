/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetra-andria <fetra-andria@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 06:14:17 by fetraand          #+#    #+#             */
/*   Updated: 2026/02/06 06:26:44 by fetra-andri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
big (haystack): La chaîne dans laquelle effectuer la recherche.
little (needle): La chaîne à rechercher.
len : Le nombre maximal de caractères à parcourir.
Comportement : Si little est une chaîne vide, big est retourné ; si little n'est pas trouvée, NULL est retourné.
*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	needle_len;
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	if (needle_len > n)
		return (NULL);
	i = 0;
	while (i <= n - needle_len && haystack[i])
	{
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}