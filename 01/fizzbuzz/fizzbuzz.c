/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:06:33 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/08 13:06:35 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_nbr(int n)
{
	char str[10] = "0123456789";
	
	if(n>9)
		put_nbr(n/10);
	write(1,&str[n%10],1);

}

int main (void)
{
	int i = 1;
	while (i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
			write(1,"fizzbuzz",8);
		else if(i % 3 == 0)
			write(1,"fizz",4);
		else if (i % 5 ==0)
			write(1,"buzz",4);
		else
			put_nbr(i);
		i++;
		write(1,"\n",1);
	}
	return (0);
}
