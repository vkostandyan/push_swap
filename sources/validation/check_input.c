/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:53:20 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/27 14:30:48 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	all_numbers(char **argv)
{
	int		i;
	int		j;
	char	**str;
	int		c;

	i = 1;
	c = 0;
	while (argv[i])
	{
		str = ft_split(argv[i], ' ');
		j = 0;
		while (str[j])
		{
			c += is_zero(str[j]);
			if (c > 1 || !is_number(str[j]))
			{
				free_split(str);
				return (0);
			}
			j++;
		}
		free_split(str);
		i++;
	}
	return (1);
}

int	count_len(char **argv)
{
	char	**str;
	int		i;
	int		j;
	int		c;
	int		len;

	i = 0;
	c = -1;
	len = 0;
	while (argv[++i])
	{
		j = 0;
		str = ft_split(argv[i], ' ');
		while (str[j])
		{
			j++;
			len++;
		}
		free_split(str);
	}
	return (len);
}

int	*take_numbers(char **argv, int len)
{
	char	**str;
	int		*numbers;
	int		i;
	int		j;
	int		c;

	i = 1;
	c = 0;
	numbers = (int *)malloc(sizeof(int) * len);
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
		free_split(str);
		i++;
	}
	return (numbers);
}

static int	have_dublicate(int *numbers, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (numbers[j] == numbers[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_input(int argc, char **argv)
{
	int	*numbers;
	int	len;

	if (argc < 2)
		return (0);
	len = count_len(argv);
	numbers = take_numbers(argv, len);
	if (!all_numbers(argv) || have_dublicate(numbers, len) || !not_empty(argv))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	free(numbers);
	return (1);
}

// int main(int argc, char **argv)
// {
//     int i = 0;
//     (void)argc;
//     int len = count_len(argv);
//     printf("len = %d\n", len);
//     int *numbers = take_numbers(argv, len);
//     while (i < len)
//     {
//         printf("%d\n", numbers[i]);
//         i++;
//     }
//     if (have_dublicate(numbers, len))
//         printf("Has dublicate\n");
//     else
//         printf("Does not have dublicate\n");
//     printf("result --> %d\n", check_input(argv));
//     printf("All numbers --> %d\n", all_numbers(argv));
//     return(0);
// }
