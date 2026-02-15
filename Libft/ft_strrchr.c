/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:44:37 by fetraand          #+#    #+#             */
/*   Updated: 2026/02/07 15:41:02 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*end;
	unsigned char	uc;

	uc = (unsigned char)c;
	end = s;
	while (*end)
		end++;
	while (end >= s)
	{
		if (*end == uc)
			return ((char *)end);
		end--;
	}
	return (NULL);
}
