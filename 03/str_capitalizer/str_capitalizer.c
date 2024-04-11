/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:27:43 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/02 13:51:23 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int n;

	n = 1;
	i = 0;
	if(argc < 2)
		write(1,"\n",1);
	while(n < argc)
	{
		i = 0;
		if (argv[n][i] >= 'a' && argv[n][i] <= 'z')
			argv[n][i] = argv[n][i] - 32;
		write(1,&argv[n][i],1);
		i++;
		while(argv[n][i])
		{
			if (argv[n][i] >= 'A' && argv[n][i] <= 'Z')
				argv[n][i] = argv[n][i] + 32;
			if ((argv[n][i] >= 'a' && argv[n][i] <= 'z') && (argv[n][i-1] == ' ' || argv[n][i-1] == '\t'))
				argv[n][i] = argv[n][i] - 32;
			write(1,&argv[n][i],1);
			i++;
		}
		write(1,"\n",1);
		n++;
	}
	return (0);
}
