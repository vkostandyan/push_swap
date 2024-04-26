/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_for4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:16:09 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/26 13:24:24 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int get_min_number(t_list **stack)
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
        if (tmp->value < value)
        {
            pos = index;
            value = tmp->value;
        }
        tmp = tmp -> next;
        index++;
    }
    return (pos);
}

static void push_min(t_list **stack_a, t_list **stack_b, int position, int len)
{
    if (position <= len / 2)
    {
        while (position > 0)
        {
            rotate_a(stack_a);
            position--;
        }
    }
    else 
        while (position < len)
        {
            reverse_rotate_a(stack_a);
            position++;
        }
    push_b(stack_a, stack_b);
}

void sort_for4(t_list **stack_a, t_list **stack_b, char **argv)
{
    int position;
    int len;

    len = count_len(argv);
    position = get_min_number(stack_a);
    push_min(stack_a, stack_b, position, len);
    sort_for3(stack_a);
    push_a(stack_b, stack_a);
}