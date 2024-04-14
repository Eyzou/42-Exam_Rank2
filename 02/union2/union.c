/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elo <elo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:20:25 by elo               #+#    #+#             */
/*   Updated: 2024/04/14 17:31:30 by elo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	int lookup[256] = {};

	if(argc == 3)
	{
		while(argv[1][i])
		{
			lookup[(int)argv[1][i]] = 1;
			i++;
		}
		i = 0;
		while(argv[2][i])
		{
			lookup[(int)argv[2][i]] = 1;
			i++;
		}
		i = 0;
		while(argv[1][i])
		{
			if(lookup[(int)argv[1][i]])
			{
				write(1,&argv[1][i],1);
				lookup[(int)argv[1][i]] = 0;
			}
			i++;
		}
		i = 0;
		while(argv[2][i])
		{
			if(lookup[(int)argv[2][i]])
			{
				write(1,&argv[2][i],1);
				lookup[(int)argv[2][i]] = 0;
			}
			i++;
		}
	}
	write (1,"\n",1);
}