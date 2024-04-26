/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:59:39 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/25 20:44:29 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **stack_from, t_list **stack_to)
{
	t_list	*temp;

	if (!stack_from || !(*stack_from) || !stack_to)
		return ;
	temp = *stack_from;
	// printf("a i tivy - %d\n", (*stack_from)->value);
	*stack_from = (*stack_from) -> next;
	temp->next = *stack_to;
	*stack_to = temp;
}

void	push_a(t_list **stack_b, t_list **stack_a)
{
	push(stack_b, stack_a);
	ft_putstr_fd("pa\n", 1);
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	ft_putstr_fd("pb\n", 1);
}
