/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 09:30:12 by ehamm             #+#    #+#             */
/*   Updated: 2024/03/28 09:54:21 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

char **ft_split(char *str)
{
	int i;
	int j;
	int k;
	char **new;
	
	i = 0;
	k = 0;
	new = (char **)malloc(sizeof(char*)*250);
	if(new == NULL)
		return(NULL);
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while(str[i])
	{
		j = 0;
		new[k] = (char *)malloc(sizeof(char)*1000);
		if (new ==NULL)
			return(NULL);
		while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i]) 
			new[k][j++] = str[i++];
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		new[k][j] = '\0';
		k++;
	}
	new[k] = NULL;
	return(new);
}

/*int main (void)
{

char **arr;

char* phrase = "Hello comment c ava ? !";
arr = ft_split(phrase);
printf("%s\n", arr[0]);
printf("%s\n", arr[1]);
printf("%s\n", arr[2]);
printf("%s\n", arr[3]);
printf("%s\n", arr[4]);
printf("%s\n", arr[5]);

}*/
