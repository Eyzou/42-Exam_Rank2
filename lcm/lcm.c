/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:07:49 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/02 15:12:02 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int	lcm(unsigned int a, unsigned int b)
{
	unsigned int div;

	if(a == 0 || b == 0)
		return (0);
	if(b > a)
		div = b;
	else
		div = a;
	while(div > 0)
	{
		if((div % a) == 0 && (div % b) == 0)
			return(div);
		++div;
	}
	return (0);
}

