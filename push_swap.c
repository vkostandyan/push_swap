/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 21:57:44 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/26 15:03:28 by vkostand         ###   ########.fr       */
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

void push_swap(char **argv, t_list *stack_a, t_list *stack_b)
{
	int *sorted_arr;
	int len;
	
	len = count_len(argv);
	sorted_arr = sorted_array(argv);
	if (len == 2)
		sort_for2(&stack_a);
	else if (len == 3)
		sort_for3(&stack_a);
	else if (len == 4)
		sort_for4(&stack_a, &stack_b, argv);
	else if (len == 5)
		sort_for5(&stack_a, &stack_b, argv);
	else 
		sort(&stack_a, &stack_b, sorted_arr, len);
}
