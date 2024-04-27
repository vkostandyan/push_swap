/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_utils2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:53:29 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/27 14:27:15 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_empty_string(char *str)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '+' || str[i] == '-'))
		i++;
	if (!str[i])
		return (1);
	return (0);
}

static int	is_empty(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i <= 0)
		return (1);
	return (0);
}

static int	len_is_valid(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	if (ft_issign(str[i]))
		i++;
	while (ft_isdigit(str[i]) && (str[i] == '0'))
		i++;
	while (str[i] && ft_isdigit(str[i]))
	{
		i++;
		len++;
	}
	if (len > 10)
		return (0);
	return (1);
}

int	not_empty(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (is_empty(argv[i]) || is_empty_string(argv[i])
			|| !len_is_valid(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

// int main(int argc, char **argv)
// {
//     (void)argc;
//     printf("%d\n", all_are(argv));
//     return (0);
// }