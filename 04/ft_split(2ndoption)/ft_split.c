/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:15:36 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/08 15:15:49 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;
	int start = 0;
	int end = 0;
	char **new;
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if(str[i])
			wc++;
		while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	new = (char **)malloc(sizeof(char *) * (wc + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		start = i;
		while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i]))
			i++;
		end = i;
		if(start < end)
		{
			new[k] = (char *)malloc(sizeof(char) *((end - start) +1));
			if(new == NULL)
				return (NULL);
			j = 0;
			while(start < end)
			{
				new[k][j] = str[start];
				j++;
				start++;
			}
			new[k][j] = '\0';
			k++;
		}
	}
	new[k] = NULL;
	return(new);
}

/*int main (void)
{
	char **arr = ft_split("KIKOO LES AMIS CA VA ?");
	printf("%s\n", arr[0]);
	printf("%s\n", arr[1]);
	printf("%s\n", arr[2]);
	printf("%s\n", arr[3]);
	printf("%s\n", arr[4]);

}*/
