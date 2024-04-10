/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:23:36 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/10 12:23:40 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	put_nbr(int nb)
{
	char *str = "0123456789";
	if(nb > 9)
		put_nbr(nb/10);
	write(1,&str[nb % 10],1);
}

int	ft_atoi(char *str)
{
	int res = 0;
	int i = 0;
	while(str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return(res);
}

int	prime(int nb)
{
	int i = 2;
	if(nb <= 1)
		return(0);
	while(i *i <=nb)
	{
		if(nb % i == 0)
			return(0);
		i++;
	}
	return (1);
}

int main (int argc, char **argv)
{
	if(argc == 2)
	{
		int sum = 0;
		int nb = ft_atoi(argv[1]);
		
		while(nb > 0)
		{
			if(prime(nb))
				sum = sum + nb;
			nb--;
		}
		put_nbr(sum);	 	
	}
	if(argc != 2)
		put_nbr(0);
	write(1,"\n",1);
	return(0);
}
