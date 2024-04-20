/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 21:57:44 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/20 22:01:00 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*fill_stack_values(char **argv)
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
	return (stack_a);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;

	if (!check_input(argv) || argc < 2)
		return (0);
	stack_a = fill_stack_values(argv);
	while (stack_a)
	{
		printf("%d\n", stack_a->value);
		stack_a = stack_a->next;
	}
	return (0);
}