/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:31:58 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/15 16:47:45 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int	pgcd(int a, int b)
{
	int pgcd = 0;
	int div = 1;
	if(a <= 0 || b <= 0)
		return(0);
	while(div <= a && div <= b)
	{
		if(a % div == 0 && b % div == 0)
			pgcd = div;
		div++;
	}
	return(pgcd);
}

int main (int argc, char **argv)
{
	int res = 0;
	if(argc == 3)
	{
		res = pgcd(atoi(argv[1]), atoi(argv[2]));
		printf("%i",res);
	}
	printf("\n");
}