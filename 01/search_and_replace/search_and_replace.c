/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searc_and_replace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Eyza <Eyza@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:20:06 by Eyza              #+#    #+#             */
/*   Updated: 2024/04/07 19:40:51 by Eyza             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int ft_strlen(char *str)
{
	int len = 0;
	while(str[len])
		len++;
	return(len);
}
int main (int argc, char **argv)
{
	int i = 0;

	if(argc == 4)
	{
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		{
			while(argv[1][i])
			{
				if(argv[1][i] == argv[2][0])
					argv[1][i] = argv[3][0];
				write(1,&argv[1][i],1);
				i++;
			}
		}
	}
	write (1,"\n",1);
	return (0);
}
