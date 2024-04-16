/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:49:08 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/16 19:33:01 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_list  *get_stack_bottom2(t_list **stack)
// {
//     t_list *temp;

//     temp = *stack;
//     while (temp->next->next)
//         temp = temp->next;
//     return (temp);
// }

// void    reverse_rotate(t_list **stack)
// {
//     t_list *prelast;
//     t_list *last;
//     t_list *temp;

//     temp = *stack;
//     if (!(*stack) || !(*stack)->next)
//         return ;
//     prelast = get_stack_bottom2(stack);
//     last = *stack;
//     while (last->next)
//         last = last->next;
//     // last = prelast->next;
//     last->next = (*stack);
//     prelast->next = NULL;
// }

void reverse_rotate(t_list **stack)
{
    t_list *prelast;
    t_list *last;
    t_list *temp;

    temp = *stack;
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