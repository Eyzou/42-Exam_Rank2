/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:56:04 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/02 13:56:07 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nbr)
{
	int n;
	char *new;
	int len;
	
	len = 0;
	n = nbr;
	if (n < 0)
		len++;
	while(n)
	{
		len++;
		n = n / 10;
	}
	new = (char *)malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (NULL);
	new[len] = '\0';
	if (nbr == 0)
	{
		new[0] = '0';
		return(new);
	}
	if (nbr < 0)
	{
		new[0] = '-';
		nbr = -nbr;
	}
	while(nbr)
	{
		new[--len] = nbr % 10 + '0' ;
		nbr = nbr / 10;
	}
	return (new);
}

/*int main (void)
{
	char *res;
	
	res = ft_itoa(-988743);
	printf("%s",res);
	return (0);
}*/
