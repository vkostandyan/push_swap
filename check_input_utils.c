/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:22:28 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/17 16:34:50 by vkostand         ###   ########.fr       */
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
static int	is_number(char *str)
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
static int is_int(char *str)
{
    long long n;

    n = ft_atoi(str);
    if (n < -2147483648 || n > 2147483647)
        return (0);
    return (1);
}

int check(char *str)
{
    if (!is_int(str) || !is_number(str))
        return (0);
    return (1);
}

// int	main(void)
// {
// 	printf("%d\n", check("2147483647"));
// 	return (0);
// }