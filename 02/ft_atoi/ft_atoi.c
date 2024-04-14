/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elo <elo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 10:14:31 by elo               #+#    #+#             */
/*   Updated: 2024/04/14 10:22:17 by elo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *str)
{
	int res = 0;
	int i = 0;
	int sign = 1;
	while(str[i] == ' ' ||  str[i] == '\n' ||  str[i] == '\t')
		i++;
	while(str[i] == '+' ||  str[i] == '-')
	{
		if(str[i]== '-')
			sign = sign * -1;
		i++;
	}
	while(str[i] >= '0' &&  str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return(res*sign);
}

/*int main (void)
{
	printf("%i",ft_atoi("54"));
}*/