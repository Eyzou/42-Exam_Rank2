/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:05:40 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/08 11:05:42 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int max (int *tab,unsigned int len)
{
	int res = 0;
	unsigned int i = 0 ;
	if(tab == NULL)
		return (0);
	while(i < len)
	{
		if(tab[i] > res)
			res = tab[i];
		i++;
	}
	return(res);
}

/*int main (void)
{
	unsigned int len = 7;
	int arr[] = {4,15,11,7,6,5,10};
	printf("%d",max(arr,len));
}*/


