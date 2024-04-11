/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:09:04 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/02 10:28:27 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv)
{
	int i;
	int repeat;

	i = 0;
	repeat = 0;
	
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				repeat = argv[1][i] - 'a' ;
			if(argv[1][i]  >='A' && argv[1][i] <= 'Z')
				repeat = argv[1][i]- 'A' ;
			while(repeat)
			{
				write(1,&argv[1][i],1);
				repeat--;
			}
			write(1,&argv[1][i],1);
			i++; 
		}
	}
	write(1,"\n",1);
	return (0);
}

