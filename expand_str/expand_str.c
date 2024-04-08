/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:06:44 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/08 16:06:45 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int is_space(char c)
{
	if(c == ' ' || c == '\t' || c == '\n')
		return(1);
	else
		return(0);
}

int main (int argc, char **argv)
{
	int i = 0;
	
	if (argc == 2)
	{
		while(is_space(argv[1][i]))
			i++;
		while(argv[1][i])
		{
			if (!is_space(argv[1][i]))
				write(1,&argv[1][i],1);
			if(is_space(argv[1][i]) && argv[1][i+1] != ' ' && argv[1][i+1] != '\0')
				write(1,"   ",3);
			i++;
		}
	}
	write(1,"\n",1);

}
