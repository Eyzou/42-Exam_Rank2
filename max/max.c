/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 08:44:33 by ehamm             #+#    #+#             */
/*   Updated: 2024/03/28 09:07:00 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int*tab, unsigned int len)
{
	if(tab == NULL)
		return (0);
	unsigned int i ;
	i = 0;
	int max ;
	max = tab[0];
	while(i < len)
	{
		if(tab[i] > max)
			max = tab[i];
		i++;
	}
	return(max);
}

/*int main(void)
{
	int tab[4] ={2,4, 8, 9};
	int len = 4;
	printf("%i",max(tab,len));
}*/
