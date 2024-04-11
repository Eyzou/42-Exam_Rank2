/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:43:12 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/08 14:43:14 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>



void print_bits(unsigned char octet)
{
	int i = 7;
	while(i >= 0)
	{
		if((octet >> i) & 1)
			write(1,"1",1);
		else
			write(1,"0",1);
		i--;
	}
}

/*int main (void)
{
	print_bits(2);
}*/
