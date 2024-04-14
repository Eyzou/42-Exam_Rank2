/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elo <elo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:29:54 by elo               #+#    #+#             */
/*   Updated: 2024/04/14 17:13:09 by elo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	int end = 0;
	int start = 0;
	if(argc == 2)
	{
		while(argv[1][i])
			i++;
		end = i ;
		while(i > 0 && (argv[1][i] != ' ' && argv[1][i] != '\n' && argv[1][i] != '\t'))
			i--;
		start = i; 
		while(start < end)
		{
			write(1,&argv[1][start],1);
			start++;
		}
	}
	write(1,"\n",1);
}