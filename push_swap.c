/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:58:41 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/12 20:12:24 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list *fill_stack_values(int argc, char *argv[])
{
    char    **str;
    t_list  *stack_a;
    t_list  *new;
    int     i;
    int     j;
    int     n;

    i = 1;
    (void)argc;
    stack_a = NULL;
    while (argv[i])
    {
        j = 0;
        str = ft_split(argv[i], ' ');
        // int k = 0;
        // while (str[k])
        // {
        //     printf("%s\n", str[k]);
        //     k++;
        // }
        // printf("\n");
        while (str[j])
        {
            n = ft_atoi(str[j]);
            new = ft_lstnew(n);
            if (!new)
                return (NULL);
            ft_lstadd_back(&stack_a, new);
            // printf("%d\n", new->value);
            j++;
        }
        i++;
    }
    return (stack_a);
}

int main(int argc, char *argv[])
{
    t_list *stack_a = NULL;
    // t_list *stack_b = NULL;
    
    if (argc < 2)
        return (0);
    stack_a = fill_stack_values(argc, argv);
    // rotate_a(stack_a);
    // rotate_a(stack_a);
    // push_a(stack_a, stack_b);
    // push_b(stack_b, stack_a);
    // printf("%d\n", stack_a->value);
    // push_b(stack_b, stack_a);
    // printf("%d\n", stack_a->value);
    t_list *temp = stack_a;
    while (stack_a)
    {
        printf("%d\n", stack_a->value);
        // printf("\n");
        stack_a = stack_a->next;
    }
    printf("\n");
    stack_a = temp;
    rotate_a(stack_a);
    int i = 0;
    while (stack_a)
    {
        stack_a = stack_a->next;
        i++;
    }
    printf("%d\n", i);
    // while (stack_a)
    // {
    //     // printf("\n");
    //     printf("%d\n", stack_a->value);
    //     stack_a = stack_a->next;
    // }
    return (0);
}