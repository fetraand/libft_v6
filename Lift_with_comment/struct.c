/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 17:02:25 by fetraand          #+#    #+#             */
/*   Updated: 2026/02/12 17:17:55 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct id
{
	int		age;
	char	name[50];
};

int	main(void)
{
	struct id fetraand;
	fetraand.age = 100;
	//fetraand.name = "Fetra";
	printf("%d", fetraand.age);
}
