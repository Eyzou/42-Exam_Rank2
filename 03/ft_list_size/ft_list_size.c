/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:12:03 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/15 11:20:36 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;


int	ft_list_size(t_list *begin_list)
{
	int i = 0;
	while(begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return(i);
}