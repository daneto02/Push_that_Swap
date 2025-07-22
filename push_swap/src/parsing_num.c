/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:12:48 by daneto            #+#    #+#             */
/*   Updated: 2025/07/22 14:08:39 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int is_num(char c)
{
	if(c >= 0 && c <= 9)
		return(1);
	return(0);
}

int check_if_valid(char *str)
{
	int i;
	
	i = 0;
	while (str[i] == ' ')
		i++;
	if ((str[i] == '+' || str[i] == '-') && str[i + 1])
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if ((str[i] == '-' || str[i] == '+') && is_num(str[i]) && str[i + 1])
			i++;
		else if (str[i] == '\0' || str[i] == ' ')
			i++;
		else
			return (0);
	}
	return (1);
}

