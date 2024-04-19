/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:58:41 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/19 17:43:28 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static int	checker(char **argv)
// {
// 	int		i;
// 	int		j;
// 	int		n;
// 	char	**str;

// 	i = 0;
// 	while (argv[i])
// 	{
// 		str = ft_split(argv[i], ' ');
// 		j = 0;
// 		while (str[j])
// 		{
		
// 			n = atoi(str[j]);
// 			if (n > 2147483647 || n < -2147483648)
// 			{
// 				print_error();
// 				return (0);
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (1);
// }

// static t_list	*fill_stack_values(char *argv[])
// {
// 	char	**str;
// 	t_list	*stack_a;
// 	t_list	*new;
// 	int		i;
// 	int		j;
// 	int		n;

// 	i = 1;
// 	stack_a = NULL;
// 	while (argv[i])
// 	{
// 		j = 0;
// 		str = ft_split(argv[i], ' ');
// 		while (str[j])
// 		{
// 			n = ft_atoi(str[j]);
// 			new = ft_lstnew(n);
// 			if (!new)
// 				return (NULL);
// 			ft_lstadd_back(&stack_a, new);
// 			j++;
// 		}
// 		free(str);
// 		i++;
// 	}
// 	return (stack_a);
// }

// int *take_numbers(int argc, char **argv)
// {
// 	char **str;
// 	int *numbers;
// 	int i;
// 	(void)argc;

// 	i = 0;
// 	str = ft_split(*argv, ' ');
// 	int j = 0;
// 	while (str[j])
// 	{
// 		printf("%s", str[j]);
// 		j++;
// 	}
// 	if (!str)
// 		return (0);
// 	numbers = (int *)malloc(sizeof(str));
// 	if(!numbers)
// 		return (0);
// 	while (str[i])
// 	{
// 		numbers[i] = ft_atoi(str[i]);
// 		// printf("%d\n", numbers[i]);
// 		i++;
// 	}
// 	return (numbers);
// }


// int	*take_numbers(char *argv[])
// {
// 	char	**str;
// 	int		*numbers;
// 	int		i;
// 	int		j;
// 	int		c;

// 	i = 1;
// 	c = 0;
// 	numbers = (int *)malloc(sizeof(str));
// 	if(!numbers)
// 		return (0);
// 	while (argv[i])
// 	{
// 		j = 0;
// 		str = ft_split(argv[i], ' ');
// 		while (str[j])
// 		{
// 			numbers[c] = ft_atoi(str[j]);
// 			c++;
// 			j++;
// 		}
// 		free(str);
// 		i++;
// 	}
// 	return (numbers);
// }

// int main(int argc, char **argv)
// {
// 	int *numbers;
// 	int i = 0;
// 	(void)argc;

// 	numbers = take_numbers(argv);
// 	while (i < 4)
// 	{
// 		printf("%d\n", numbers[i]);
// 		i++;
// 	}
// 	free(numbers);
// 	return (0);
// }

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%d\n", check_input(argv));
// 	return (0);
// }

// int	main(int argc, char *argv[])
// {
// 	t_list	*stack_a;
// 	t_list	*temp;

// 	stack_a = NULL;
	
// 	// if (!check_input(argv))
// 	// {
// 	// 	print_error();
// 	// 	return (0);
// 	// }
// 	if (argc < 2)
// 		return (0);
// 	if (!checker(argv))
// 		return (0);
// 	stack_a = fill_stack_values(argv);
// 	temp = stack_a;
// 	while (stack_a)
// 	{
// 		printf("%d\n", stack_a->value);
// 		stack_a = stack_a->next;
// 	}
// 	return (0);
// }
