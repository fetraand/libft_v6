/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 09:37:34 by fetraand          #+#    #+#             */
/*   Updated: 2026/02/11 09:42:18 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len1;
	size_t	len2;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join = malloc(len1 + len2 + 1);
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, len1);
	ft_memcpy(join + len1, s2, len2);
	join[len1 + len2] = '\0';
	return (join);
}
