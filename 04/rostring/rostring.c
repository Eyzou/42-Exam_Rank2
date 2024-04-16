/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:27:09 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/16 13:56:03 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
	int i = 0;
	int end = 0;
	int start = 0;
	if(argc > 1)
	{
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		start = i;
		while(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
			i++;
		end = i;
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		if(argv[1][i])
		{
			while(argv[1][i])
			{
				if(argv[1][i] == ' ' || argv[1][i] == '\t')
					{
						while(argv[1][i] == ' ' || argv[1][i] == '\t')
							i++;
						if(argv[1][i])
							write(1," ",1);
					}
				else
				{
					write(1,&argv[1][i],1);
					i++;
				}
			}
		write(1," ",1);
		}
		while(start < end)
		{
			write(1,&argv[1][start],1);
			start++;
		}
	}
	write(1,"\n",1);
}