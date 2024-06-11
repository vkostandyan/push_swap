/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:23:09 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/27 15:58:13 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_number(t_list **stack)
{
	int		pos;
	int		index;
	t_list	*tmp;
	int		value;

	tmp = *stack;
	value = tmp->value;
	pos = 0;
	index = 0;
	while (tmp)
	{
		if (tmp->value > value)
		{
			pos = index;
			value = tmp->value;
		}
		tmp = tmp->next;
		index++;
	}
	return (pos);
}

static void	push_max(t_list **stack_a, t_list **stack_b, int position, int len)
{
	if (position <= len / 2)
	{
		while (position > 0)
		{
			rotate_b(stack_b, 1);
			position--;
		}
	}
	else
	{
		while (position < len)
		{
			reverse_rotate_b(stack_b, 1);
			position++;
		}
	}
	push_a(stack_b, stack_a, 1);
}

void	push_back(t_list **stack_a, t_list **stack_b, int len)
{
	int	position;

	while (len > 0)
	{
		position = get_max_number(stack_b);
		push_max(stack_a, stack_b, position, len);
		len--;
	}
}
