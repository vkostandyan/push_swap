/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:11:23 by vkostand          #+#    #+#             */
/*   Updated: 2024/06/23 15:38:25 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	execute(t_list **stack_a, t_list **stack_b, char *command)
{
	if (strcmp(command, "sa\n") == 0)
		swap_a(stack_a, 0);
	else if (strcmp(command, "sb\n") == 0)
		swap_b(stack_b, 0);
	else if (strcmp(command, "ss\n") == 0)
		swap_both(stack_a, stack_b, 0);
	else if (strcmp(command, "pa\n") == 0)
		push_a(stack_b, stack_a, 0);
	else if (strcmp(command, "pb\n") == 0)
		push_b(stack_a, stack_b, 0);
	else if (strcmp(command, "ra\n") == 0)
		rotate_a(stack_a, 0);
	else if (strcmp(command, "rb\n") == 0)
		rotate_b(stack_b, 0);
	else if (strcmp(command, "rr\n") == 0)
		rotate_both(stack_a, stack_b, 0);
	else if (strcmp(command, "rra\n") == 0)
		reverse_rotate_a(stack_a, 0);
	else if (strcmp(command, "rrb\n") == 0)
		reverse_rotate_b(stack_b, 0);
	else if (strcmp(command, "rrr\n") == 0)
		reverse_rotate_both(stack_a, stack_b, 0);
}

static int	check_command(char *command)
{
	if (strcmp(command, "sa\n") == 0 || strcmp(command, "sb\n") == 0
		|| strcmp(command, "pa\n") == 0 || strcmp(command, "pb\n") == 0
		|| strcmp(command, "ra\n") == 0 || strcmp(command, "rb\n") == 0
		|| strcmp(command, "rra\n") == 0 || strcmp(command, "rrb\n") == 0
		|| strcmp(command, "rr\n") == 0 || strcmp(command, "rrr\n") == 0
		|| strcmp(command, "ss\n") == 0)
		return (1);
	return (0);
}

static int	get_input(t_list **stack_a, t_list **stack_b)
{
	char	*command;

	while (1)
	{
		command = get_next_line(0);
		if (!command)
			break ;
		if (!check_command(command))
		{
			free(command);
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
		execute(stack_a, stack_b, command);
		free(command);
	}
	return (1);
}

static void	check_result(t_list **stack_a, t_list **stack_b)
{
	int		len;
	t_list	*tmp;

	len = 0;
	tmp = *stack_b;
	while (tmp)
	{
		len++;
		tmp = tmp->next;
	}
	if (is_sorted(stack_a) && len == 0)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (!check_input(argc, argv))
		return (0);
	stack_a = fill_stack_values(argv);
	stack_b = NULL;
	if (!get_input(&stack_a, &stack_b))
	{
		if (stack_a)
			free_stack(stack_a, argv);
		if (stack_b)
			free_stack(stack_b, argv);
		return (0);
	}
	check_result(&stack_a, &stack_b);
	if (stack_a)
			free_stack(stack_a, argv);
	if (stack_b)
		free_stack(stack_b, argv);
	return (0);
}
