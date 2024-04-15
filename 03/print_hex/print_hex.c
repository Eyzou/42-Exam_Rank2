/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:53:06 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/15 17:00:46 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int nb)
{
	if(nb > 16)
		print_hex(nb /16);
	write(1,&"0123456789abcdef"[nb%16],1);
}

int	ft_atoi(char *str)
{
	int res = 0;
	int sign = 1;
	int i = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	if(str[i] == '-')
	{
		sign = sign *-1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return(sign * res);

}
int main (int argc , char **argv)
{
	if(argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1,"\n",1);
}