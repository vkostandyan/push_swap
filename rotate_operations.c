/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:45:34 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/12 20:13:21 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate(t_list *stack)
{
    t_list *temp;

    if (!stack || !stack->next)
        return ;
    temp = stack;
    stack = stack->next;
    temp->next = NULL;
    ft_lstadd_back(&stack, temp);
}

void    rotate_a(t_list *stack_a)
{
    rotate(stack_a);
    ft_putstr_fd("ra\n", 1);
}

void    rotate_b(t_list *stack_b)
{
    rotate(stack_b);
    ft_putstr_fd("rb\n", 1);
}

void    rotate_both(t_list *stack_a, t_list *stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    ft_putstr_fd("rr\n", 1);
}