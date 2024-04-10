/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:37:11 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/10 10:44:46 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void put_nbr(int nb)
{
	char *str = "0123456789";

	if(nb > 9)
		put_nbr(nb/10);
	write(1,&str[nb%10],1);
}

int main(int argc, char **argv)
{
	(void)argv;
	
	if(argc == 1)
	{
		write(1,"0",1);
		write(1,"\n",1);
		return (0);
	}
	else
	{
		put_nbr(argc-1);
		write(1,"\n",1);
	}
}
