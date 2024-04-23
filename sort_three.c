/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:14:06 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/23 21:21:50 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_three(t_list *stack_a)
{
    if (stack_a->value > stack_a->next->value && stack_a->next->value > stack_a->next->next->value)
    {
        rotate_a(&stack_a);
        rotate_a(&stack_a);
    }
    else if (stack_a->value > stack_a->next->value && stack_a->value < stack_a->next->next->value)
        swap_a(stack_a);
    else if (stack_a->value > stack_a->next->value && stack_a->next->value < stack_a->next->next->value)
        rotate_a(&stack_a);
    else if (stack_a->value < stack_a->next->value && stack_a->value > stack_a->next->next->value)
        reverse_rotate_a(&stack_a);
    else if (stack_a->value < stack_a->next->value && stack_a->next->value > stack_a->next->next->value)
    {
        reverse_rotate_a(&stack_a);
        swap_a(stack_a);
    }
}
