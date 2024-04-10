/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:20:09 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/10 11:20:10 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *str, char c, int index)
{
	int i = 0;
	while(i < index)
	{
		if(str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main (int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int k = 0;
	
	if(argc == 3)
	{
		while(argv[1][i])
		{
			i++;
		}
		while(argv[2][j])
		{
			argv[1][i] = argv[2][j];
			i++;
			j++;	
		}
		i--;
		while(k<=i)
		{
			if(!check(argv[1],argv[1][k],k))
				write(1,&argv[1][k],1);
			k++;
		}
	}
	write(1,"\n",1);
	return (0);
}
