/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_for3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:04:42 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/27 15:56:26 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_for3(t_list **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->next->value > (*stack_a)->next->next->value)
	{
		rotate_a(stack_a, 1);
		swap_a(stack_a, 1);
	}
	else if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->value < (*stack_a)->next->next->value)
		swap_a(stack_a, 1);
	else if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->next->value < (*stack_a)->next->next->value)
		rotate_a(stack_a, 1);
	else if ((*stack_a)->value < (*stack_a)->next->value
		&& (*stack_a)->value > (*stack_a)->next->next->value)
		reverse_rotate_a(stack_a, 1);
	else if ((*stack_a)->value < (*stack_a)->next->value
		&& (*stack_a)->next->value > (*stack_a)->next->next->value)
	{
		reverse_rotate_a(stack_a, 1);
		swap_a(stack_a, 1);
	}
}
