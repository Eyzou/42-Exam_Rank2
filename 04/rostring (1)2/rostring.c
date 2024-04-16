/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:01:02 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/16 16:01:05 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	int start = 0;
	int end = 0;
	
	if(argc > 1)
	{
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		start = i;
		while(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
			i++;
		end = i;
		if(argv[1][i])
		{
			while(argv[1][i])
			{
				if(argv[1][i] == ' ' ||  argv[1][i] == '\t')
					i++;
				else if(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
				{
					write(1,&argv[1][i],1);
					if(argv[1][i+1] == ' ' || argv[1][i+1] == '\t' || argv[1][i+1] == '\0')
						write(1, " ",1);
					i++;
				}
			}
		}
		while(start < end)
		{
			write(1,&argv[1][start],1);
			start++;
		}
	}
	write(1, "\n",1);
}
