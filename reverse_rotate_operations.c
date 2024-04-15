/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:49:08 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/15 22:01:37 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list  *get_stack_bottom2(t_list **stack)
{
    t_list *temp;

    temp = *stack;
    while (temp->next->next)
        temp = temp->next;
    return (temp);
}

void    reverse_rotate(t_list **stack)
{
    t_list *prelast;
    t_list *tmp;
    
    if (!(*stack) || !(*stack)->next)
        return ;
    prelast = get_stack_bottom2(stack);
    tmp = prelast->next;
    ft_lstadd_front(stack, tmp);
    
}

void    reverse_rotate_a(t_list **stack_a)
{
    reverse_rotate(stack_a);
    ft_putstr_fd("rra\n", 1);
}

void    reverse_rotate_b(t_list **stack_b)
{
    reverse_rotate(stack_b);
    ft_putstr_fd("rrb\n", 1);
}

void    reverse_rotate_both(t_list **stack_a, t_list **stack_b)
{
    reverse_rotate(stack_a);
    reverse_rotate(stack_b);
    ft_putstr_fd("rrr\n", 1);
}