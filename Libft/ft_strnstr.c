/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 06:14:17 by fetraand          #+#    #+#             */
/*   Updated: 2026/02/07 15:23:39 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
