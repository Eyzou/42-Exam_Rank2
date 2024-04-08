/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:53:58 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/08 14:53:59 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_base(char c,int base)
{
	char digit[17] = "0123456789abcdef";
	char digit2[17] = "0123456789ABCDEF";
	
	while(base--)
	{
		if(digit[base] == c || digit2[base] == c)
			return(1);
	}
	return(0);
}

int ft_atoi_base(const char *str, int str_base)
{
	int res = 0;
	int i = 0;
	int sign = 1;
	
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] && check_base(str[i],str_base))
	{
		if(str[i] >= '0' && str[i] <= '9')
			res = res * str_base + (str[i] - '0');
		if(str[i] >= 'a' && str[i] <='z')
			res = res * str_base + (str[i] - ('a' - 10));
		if(str[i] >= 'A' && str[i] <='Z')
			res = res * str_base + (str[i] - ('A' - 10));
		i++;
	}
	return(res*sign);
}

/*int main (void)
{
	printf("%d",ft_atoi_base("Ceci permet de decouvrir le fonctionnement de ton ft_atoi_base.",16));
}*/

