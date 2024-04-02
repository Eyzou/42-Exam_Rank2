/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:04:04 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/02 16:04:06 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void fprime(int nb)
{
	int check;
	check = 2;
	if (nb == 1)
	{
		printf("1");
		return;
	}
	while(nb >= check)
	{
		if(nb % check == 0)
		{
			printf("%i",check);
			if(nb != check)
				printf("*");
			nb = nb /check;
			check--;
		}
		check++;
	}

}

int main (int argc, char **argv)
{
	if(argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
