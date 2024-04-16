/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:49:56 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/16 13:56:01 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void(*f)(void *))
{
	t_list *lst_ptr = begin_list;
	while(lst_ptr)
	{
		(*f)(lst_ptr->data);
		lst_ptr = lst_ptr->next;
	}
}