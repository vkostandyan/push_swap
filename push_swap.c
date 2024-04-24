/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 21:57:44 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/24 19:35:26 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *sorted_array(char **argv)
{
	int i;
	int temp;
	int *arr;
	int len;

	i = 0;
	len = count_len(argv);
	arr = take_numbers(argv, len);
	if (!arr || !len)
		return (NULL);
	while (i < len - 1)
	{
		if (arr[i] > arr[i + 1])
		{
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
			i = 0;
		}	
		else
			i++;
	}
	return (arr);
}

void push_swap(char **argv)
{
	int *arr;
	int i = 0;
	int len = count_len(argv);
	
	arr = sorted_array(argv);
	while (i < len)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}
