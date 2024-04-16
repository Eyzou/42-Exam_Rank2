/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:59:33 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/16 15:30:11 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

t_list *sort_list(t_list* lst, int (*cmp)(int,int))
{
	t_list *tmp;
	int swap = 0;
	tmp= lst;
	while(lst->next != NULL)
	{
		if(((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;

		}
		else
			lst= lst->next;
	}
	lst = tmp;
	return(lst);
}