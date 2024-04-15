/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:53:21 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/15 12:03:03 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int len;
	int *tab;
	int i = 0;
	if(start > end)
		len = start - end + 1;
	else
		len = end - start + 1;
	tab =(int *)malloc(sizeof(int)* len + 1);
	while(i < len)
	{
		if(end > start)
		{
			tab[i] = end;
			end--;
			i++;
		}
		else
		{
			tab[i] = end;
			end++;
			i++;
		}
	}
	return(tab);
}
/*int main(void)
{
	int *tab = ft_rrange(15,-5);
	printf("%i",tab[0]);
	printf("%i",tab[1]);
	printf("%i",tab[2]);
}*/