/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:53:20 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/19 19:05:02 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_int(char *str)
{
	long long	n;

	n = ft_atoi(str);
	if (n < -2147483648 || n > 2147483647)
		return (0);
	return (1);
}

static int	all_numbers(char **argv)
{
	int		i;
	int		j;
	char	**str;

	i = 1;
	while (argv[i])
	{
		str = ft_split(argv[i], ' ');
		j = 0;
		while (str[j])
		{
			if (!is_number(str[j]) || !is_int(str[j]))
				return (0);
			j++;
		}
		free(str);
		i++;
	}
	return (1);
}

static int	*take_numbers(char *argv[])
{
	char	**str;
	int		*numbers;
	int		i;
	int		j;
	int		c;

	i = 1;
	c = 0;
	numbers = (int *)malloc(sizeof(str));
	if (!numbers)
		return (0);
	while (argv[i])
	{
		j = 0;
		str = ft_split(argv[i], ' ');
		while (str[j])
		{
			numbers[c] = ft_atoi(str[j]);
			c++;
			j++;
		}
		free(str);
		i++;
	}
	return (numbers);
}

int	have_dublicate(int *numbers)
{
	int	i;
	int	j;

	i = 0;
	while (numbers[i])
	{
		j = i + 1;
		while (numbers[j] && numbers[i] != numbers[j])
			j++;
		if (numbers[j])
		{
			free(numbers);
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_input(char **argv)
{
	int	*numbers;

	numbers = take_numbers(argv);
	if (!all_numbers(argv) || have_dublicate(numbers))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	free(numbers);
	return (1);
}

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	if (!check_input(argv))
// 	{
// 		system("leaks a.out");
// 		return (0);
// 	}
// 	printf("\n");
// 	system("leaks a.out");
// 	return (0);
// }

// static int is_int(int n)
// {
//     if (n < -2147483648 || n > 2147483647)
//         return (0);
//     return (1);
// }

// int	check_input(char **argv)
// {
// 	int *numbers;
// 	int i;
// 	int j;

// 	i = 0;
// 	j = 1;
// 	numbers = take_numbers(argv);
// 	// while(i < 5)
// 	// {
// 	// 	printf("%d\n", numbers[i]);
// 	// 	i++;
// 	// }
// 	// i = 0;
// 	if(!numbers)
// 		return(0);
// 	while(i < 5)
// 	{
// 		printf("\n");
// 		if(!is_number(argv[j]) || !is_int(numbers[i]))
// 		{
// 			free(numbers);
// 			return (0);
// 		}
// 		i++;
// 		j++;
// 	}
// 	free(numbers);
// 	return (1);
// }

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%d\n", have_dublicate(argv));
// 	return (0);
// }