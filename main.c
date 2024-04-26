/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:31:45 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/26 16:16:13 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;


	if (!check_input(argc, argv))
		return (0);
	stack_a = fill_stack_values(argv);
	stack_b = NULL;
	// if (is_sorted(&stack_a))
	// 	return (0);
	push_swap(argv, stack_a, stack_b);
	// while (stack_a)
	// {
	// 	printf("%d\n", stack_a->value);
	// 	stack_a = stack_a->next;
	// }
	return (0);
}

