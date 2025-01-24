/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:49:08 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/27 16:04:05 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **stack)
{
	t_list	*prelast;
	t_list	*last;

	if (!(*stack) || !(*stack)->next)
		return ;
	prelast = *stack;
	last = (*stack)->next;
	while (last->next)
	{
		prelast = last;
		last = last->next;
	}
	last->next = *stack;
	prelast->next = NULL;
	*stack = last;
}

void	reverse_rotate_a(t_list **stack_a, int flag)
{
	reverse_rotate(stack_a);
	if (flag)
		ft_putstr_fd("rra\n", 1);
}

void	reverse_rotate_b(t_list **stack_b, int flag)
{
	reverse_rotate(stack_b);
	if (flag)
		ft_putstr_fd("rrb\n", 1);
}

void	reverse_rotate_both(t_list **stack_a, t_list **stack_b, int flag)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	if (flag)
		ft_putstr_fd("rrr\n", 1);
}
