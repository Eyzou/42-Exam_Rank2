/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elo <elo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:12:47 by elo               #+#    #+#             */
/*   Updated: 2024/04/09 09:51:36 by elo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char* str)
{
	int res = 0;
	int sign = 1;
	int i = 0;
	while(str[i] == ' '|| str[i] == '\t'||str[i] == '\n')
		i++;
	if(str[i] == '-')
		sign = sign * -1;
	while(str[i] == '-' || str[i] == '+')
		i++;
	while((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return(res * sign);
}

void print_hex(int nb)
{
	char str[] ="0123456789abcdef";

	if (nb >= 16)
		print_hex(nb/16);
	write(1,&str[nb%16],1);
}


int main (int argc, char ** argv)
{
	if(argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1,"\n",1);
	return (0);
}