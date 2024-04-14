/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.C                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elo <elo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:39:00 by elo               #+#    #+#             */
/*   Updated: 2024/04/14 19:17:33 by elo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i],1);
		i++;
	}
}

int main (int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int len = 0;
	if(argc == 3)
	{
		while(argv[1][len])
			len++;
		while(argv[2][i] && argv[1][j])
		{
			if(argv[2][i] == argv[1][j])
				j++;
			i++;
		}
		if(j == len)
			ft_putstr(argv[1]);
	}
	write(1,"\n",1);	
}
 