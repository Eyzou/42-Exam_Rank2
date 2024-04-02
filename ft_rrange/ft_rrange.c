/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 09:11:12 by ehamm             #+#    #+#             */
/*   Updated: 2024/03/28 09:29:29 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *new;
	int len;
	len = end-start;

	new = (int *)malloc(sizeof(int)* len +1);
	if (new == NULL)
		return (NULL);
	while(len >= 0)
	{
		new[len]= start;
		start++;
		len--;
	}
	return (new);
}

/*int main(void)
{
	int i ;
	i = 0;
	int *tab;
	tab = ft_rrange(2,9);
	while(tab[i])
        {
		printf("%i", tab[i++]);
        }
}*/
