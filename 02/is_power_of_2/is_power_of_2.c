/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_poser_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:24:19 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/08 13:25:51 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	if(n == 0)
		return(0);
	if(n == 1)
		return(1);
	if(n % 2 == 0)
		return (1);
	return (0);
}

/*int main (void)
{
	printf("%d\n",is_power_of_2(40));
	printf("%d\n",is_power_of_2(8));
	printf("%d\n",is_power_of_2(3));
	printf("%d\n",is_power_of_2(987));
}*/
