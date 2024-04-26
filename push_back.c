/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:23:09 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/26 17:06:55 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static int	get_max_position(t_list **stack)
// {
// 	int		tmp_content;
// 	t_list	*tmp_node;
// 	int		pos;
// 	int		count;

// 	if (stack == NULL)
// 		return (0);
// 	*stack = get_first_node(*stack);
// 	tmp_node = *stack;
// 	tmp_content = tmp_node->content;
// 	pos = 0;
// 	count = 0;
// 	while (tmp_node)
// 	{
// 		if (tmp_node->content > tmp_content)
// 		{
// 			pos = count;
// 			tmp_content = tmp_node->content;
// 		}
// 		tmp_node = tmp_node->next;
// 		count++;
// 	}
// 	return (pos);
// }

// static void	push_max(t_list **stack_a, t_list **stack_b, int pos, int len)
// {
// 	if (pos <= (len + 1) / 2)
// 	{
// 		while (pos > 0)
// 		{
// 			execute(stack_a, stack_b, "rb", 1);
// 			pos--;
// 		}
// 	}
// 	else
// 	{
// 		while (pos < len)
// 		{
// 			execute(stack_a, stack_b, "rrb", 1);
// 			pos++;
// 		}
// 	}
// 	push_a(stack_b, stack_a);
// }

// void	push_back(t_list **stack_a, t_list **stack_b, int arr_len)
// {
// 	int	pos;

// 	while (arr_len > 0)
// 	{
// 		pos = get_max_position(stack_b);
// 		push_max(stack_a, stack_b, pos, arr_len);
// 		arr_len--;
// 	}
// }

static int get_max_number(t_list **stack)
{
    int pos;
    int index;
    t_list *tmp;
    int value;
    
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
        tmp = tmp -> next;
        index++;
    }
    return (pos);
}

static void push_max(t_list **stack_a, t_list **stack_b, int position, int len)
{
    if (position <= len / 2)
    {
        while (position > 0)
        {
            
            rotate_b(stack_b);
            position--;
        }
    }
    else 
        while (position < len)
        {
            reverse_rotate_b(stack_b);
            position++;
        }
    push_a(stack_b, stack_a);
}

void push_back(t_list **stack_a, t_list **stack_b, int len)
{
    int position;
    
    while (len > 0)
    {
        position = get_max_number(stack_b);
        push_max(stack_a, stack_b, position, len);
        len--;
    }
}