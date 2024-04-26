/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:09:26 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/26 16:16:30 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **stack_a, t_list **stack_b, int *arr, int len)
{
	int i;
	int step;

	i = 0;
	step = get_optimal_step(len);
	while (*stack_a && i < len)
	{
		if ((*stack_a)->value <= arr[i])
		{
			push_b(stack_a, stack_b);
			rotate_b(stack_b);
			i++;
		}
		else if ((*stack_a)->value <= arr[i + step])
		{
			push_b(stack_a, stack_b);
			i++;
		}
		else
			rotate_a(stack_a);
		if (i + step >= len)
            step--;
	}
    push_back(stack_a, stack_b, len);
}
