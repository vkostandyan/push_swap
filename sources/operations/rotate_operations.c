/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:45:34 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/27 16:03:55 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*get_stack_bottom(t_list **stack)
{
	t_list	*ptr;

	ptr = *stack;
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}

void	rotate(t_list **stack)
{
	t_list	*temp;
	t_list	*last;

	if (!*stack || !(*stack)->next)
		return ;
	temp = *stack;
	*stack = (*stack)->next;
	temp->next = NULL;
	last = get_stack_bottom(stack);
	last->next = temp;
}

void	rotate_a(t_list **stack_a, int flag)
{
	rotate(stack_a);
	if (flag)
		ft_putstr_fd("ra\n", 1);
}

void	rotate_b(t_list **stack_b, int flag)
{
	rotate(stack_b);
	if (flag)
		ft_putstr_fd("rb\n", 1);
}

void	rotate_both(t_list **stack_a, t_list **stack_b, int flag)
{
	rotate(stack_a);
	rotate(stack_b);
	if (flag)
		ft_putstr_fd("rr\n", 1);
}
