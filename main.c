/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:31:45 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/24 21:02:27 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;

	if (!check_input(argc, argv))
		return (0);
	stack_a = fill_stack_values(argv);
	// if (is_sorted(stack_a))
	// 	printf("sorted\n");
	// else 
	// 	printf("che axper\n");
	// push_swap(argv);
	// sort_three(stack_a);
	while (stack_a)
	{
		printf("%d\n", stack_a->value);
		stack_a = stack_a->next;
	}
	// free_stack(stack_a, argv);
	// system("leaks push_swap");
	return (0);
}

