/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:37:22 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/15 11:53:02 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
	int len = 0;
	int i = 0;
	int *tab;
	if(start > end)
		len = start - end + 1;
	else
		len = end - start + 1;
	tab = (int *)malloc(sizeof(int)*len +1);
	while(i < len)
	{
		if(start > end)
		{
			tab[i] = start;
			start--;
			i++;
		}
		else
		{
			tab[i] = start;
			start++;
			i++;
		}
	}
	return(tab);
}