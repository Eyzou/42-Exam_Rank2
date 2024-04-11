/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:41:55 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/02 14:41:58 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t ft_strcspn(const char *s,const char *reject)
{
	int i;
	int j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if(s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return(i);
}

/*int main (void)
{
	printf("%li\n",ft_strcspn("kikoo", "i"));
	printf("%li\n",strcspn("kikoo", "i"));
}*/
