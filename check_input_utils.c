/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:22:28 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/19 19:05:34 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int	ft_issign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	is_number(char *str)
{
	int	i;

	i = 0;
	if (!ft_isdigit(str[i]) && !ft_issign(str[i]))
		return (0);
	i++;
	while (str[i] && ft_isdigit(str[i]))
		i++;
	if (str[i])
		return (0);
	return (1);
}
// static int compare_numbers(char *s1, char *s2)
// {
// 	int i;

// 	i = 0;
// 	if (!s1 || !s2)
// 		return (0);
// 	while (s1[i] && s2[i] && s1[i] == s2[i])
// 		i++;
// 	if (s1[i] || s2[i])
// 		return (0);
// 	return (1);
// }

// int have_dublicate(char **argv)
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	while (argv[i])
// 	{
// 		j = i + 1;
// 		while (argv[j])
// 		{
// 			if (compare_numbers(argv[i], argv[j]))
// 				return (1);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }
// static int is_int(char *str)
// {
//     long long n;

//     n = ft_atoi(str);
//     if (n < -2147483648 || n > 2147483647)
//         return (0);
//     return (1);
// }

// int check(char *str)
// {
//     if (!is_number(str))
//         return (0);
//     return (1);
// }

// int	main(void)
// {
// 	printf("%d\n", is_number("02147483647"));
// 	return (0);
// }