// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   fill_free_stack.c                                  :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/04/22 20:08:29 by vkostand          #+#    #+#             */
// /*   Updated: 2024/04/22 20:10:12 by vkostand         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "push_swap.h"

t_list	*fill_stack_values(char **argv)
{
	int		*numbers;
	t_list	*stack_a;
	t_list	*new;
	int		i;
	int 	len;

	i = 0;
	stack_a = NULL;
	len = count_len(argv);
	numbers = take_numbers(argv, len);
	while (i < len)
	{
		new = ft_lstnew(numbers[i]);
		if (!new)
			return (NULL);
		ft_lstadd_back(&stack_a, new);
		i++;
	}
    free(numbers);
	return (stack_a);
}

void free_stack(t_list *stack_a, char **argv)
{
    int     len;
    int     i;
    t_list  *temp;

    i = 0;
    len = count_len(argv);
    while (i < len && stack_a->next)
    {
        temp = stack_a->next;
        printf("mtav\n");
        free(stack_a);
       // stack_a = NULL;
        stack_a = temp;
        printf("a%d\n", stack_a->value);
        i++;
    }
    if (stack_a)
        free(stack_a);
}

void free_split(char **str)
{
    int i;

    i = 0;
    while(str[i])
    {
        free(str[i]);
        i++;
    }
    free(str);
}