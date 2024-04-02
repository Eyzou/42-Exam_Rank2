/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:29:45 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/02 11:02:48 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	do_op(char *n1, char op, char *n2)
{
	int res;

	res = 0;
	if(op == '*')
		res = atoi(n1) * atoi(n2);
	else if(op == '/')
		res = atoi(n1) / atoi(n2);
	else if(op == '+')
		res = atoi(n1) + atoi(n2);
	else if(op == '-')
		res = atoi(n1) - atoi(n2);
	else if(op == '%')
		res= atoi(n1) % atoi(n2);
	printf("%i",res);
}

int main (int argc, char **argv)
{
	if(argc == 4)
	{
		do_op(argv[1],argv[2][0],argv[3]);
		printf("\n");
	}
	else
		printf("\n");
}
