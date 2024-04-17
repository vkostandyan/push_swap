/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:58:41 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/17 16:38:37 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	checker(char **argv)
{
	int		i;
	int		j;
	int		n;
	char	**str;

	i = 0;
	while (argv[i])
	{
		str = ft_split(argv[i], ' ');
		j = 0;
		while (str[j])
		{
		
			n = atoi(str[j]);
			if (n > 2147483647 || n < -2147483648)
			{
				print_error();
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

static t_list	*fill_stack_values(char *argv[])
{
	char	**str;
	t_list	*stack_a;
	t_list	*new;
	int		i;
	int		j;
	int		n;

	i = 1;
	stack_a = NULL;
	while (argv[i])
	{
		j = 0;
		str = ft_split(argv[i], ' ');
		while (str[j])
		{
			n = ft_atoi(str[j]);
			new = ft_lstnew(n);
			if (!new)
				return (NULL);
			ft_lstadd_back(&stack_a, new);
			j++;
		}
		free(str);
		i++;
	}
	return (stack_a);
}

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*temp;

	stack_a = NULL;
	if (!check_input(argv))
	{
		print_error();
		return (0);
	}
	if (argc < 2)
		return (0);
	if (!checker(argv))
		return (0);
	stack_a = fill_stack_values(argv);
	temp = stack_a;
	while (stack_a)
	{
		printf("%d\n", stack_a->value);
		stack_a = stack_a->next;
	}
	return (0);
}
