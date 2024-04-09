/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elo <elo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:45:08 by elo               #+#    #+#             */
/*   Updated: 2024/04/09 15:03:43 by elo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	int end = 0;
	int start = 0;
	int flag = 0;
	if(argc == 2)
	{
		while(argv[1][i])
			i++;
		while(i > 0)
		{
				while(argv[1][i] == ' '|| argv[1][i] == '\t' || argv[1][i] == '\0' )
					i--;
				end = i;
				while(argv[1][i] != ' ' &&  argv[1][i] != '\t' && argv[1][i] != '\0')
					i--;
				start = i + 1;
				flag = start;
				while(start <= end)
				{
					write(1,&argv[1][start],1);
					start++;
				}
				if(flag !=0)
					write(1," ",1);
		}
	}
	write(1,"\n",1);
}