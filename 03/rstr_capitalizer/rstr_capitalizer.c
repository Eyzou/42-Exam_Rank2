/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elo <elo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:30:10 by elo               #+#    #+#             */
/*   Updated: 2024/04/09 14:42:41 by elo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isspace(char c)
{
	if (c <= 32)
		return (1);
	return(0);
}

void r_capitalizer(char *str)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if((str[i] >= 'a' && str[i] <= 'z') && ft_isspace(str[i+1]))
			str[i] = str[i] - 32;
		write (1, &str[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	int j = 1;

	if(argc == 1)
		write(1,"\n",1);
	else
	{
		while(j < argc)
			{
				r_capitalizer(argv[j]);
				write(1,"\n",1);
				j++;
			}	
	}
	return(0);
}
