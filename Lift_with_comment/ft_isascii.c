/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:41:11 by fetraand          #+#    #+#             */
/*   Updated: 2026/02/02 18:08:01 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return(1);
return(0);
}

#include <stdio.h>

int main(void)
{
//Pour tester les non ascii
	printf("%d",ft_isascii(00));
    return (0);
}
