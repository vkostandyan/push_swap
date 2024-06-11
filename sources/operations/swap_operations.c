/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:18:42 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/27 16:03:22 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
{
	int	temp;

	if (!(*stack) || !(*stack)->next)
		return ;
	temp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = temp;
}

void	swap_a(t_list **stack_a, int flag)
{
	swap(stack_a);
	if (flag)
		ft_putstr_fd("sa\n", 1);
}

void	swap_b(t_list **stack_b, int flag)
{
	swap(stack_b);
	if (flag)
		ft_putstr_fd("sb\n", 1);
}

void	swap_both(t_list **stack_a, t_list **stack_b, int flag)
{
	swap(stack_a);
	swap(stack_b);
	if (flag)
		ft_putstr_fd("ss\n", 1);
}
