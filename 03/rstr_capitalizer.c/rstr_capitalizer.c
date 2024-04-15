/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:01:36 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/15 17:16:13 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void rstr_capitalizer(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else if((str[i] >= 'a' && str[i] <= 'z') && (str[i+1] == ' ' || str[i+1] == '\t'))
			str[i] = str[i] - 32;
			write(1,&str[i],1);
			i++;
	}
}

int main (int argc, char **argv)
{
	int i = 0;
	while(i < argc)
	{
		rstr_capitalizer(argv[i]);
		i++;
	}
}