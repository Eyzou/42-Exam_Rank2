/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:09:34 by ehamm             #+#    #+#             */
/*   Updated: 2024/03/28 18:22:21 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	prime(int nb)
{
	int check;
	check = 2;
	if(nb == 1)
		printf("1");
	while(nb > 1)
	{		
		if(nb % check == 0)
		{
			printf("%i",check);
			nb = nb /check;
			if(nb>1)
				printf("*");
			check --;
		}
		check++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{	
		prime(atoi(argv[1]));
	}
	printf("\n");
}
