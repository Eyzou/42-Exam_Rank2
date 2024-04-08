/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:32:03 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/08 14:32:05 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_lower(char c)
{
	if(c >= 'a' && c <= 'z')
		return(1);
	else
		return (0);
}

int	is_upper(char c)
{
	if(c >= 'A' && c <= 'Z')
		return(1);
	else
		return (0);
}

int main (int argc, char **argv)
{
	int i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			if(is_lower(argv[1][i]))
				argv[1][i] = argv[1][i] - 32;
			else if(is_upper(argv[1][i]))
				argv[1][i] = argv[1][i] + 32;
			write(1,&argv[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return(0);
}
