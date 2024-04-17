/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:53:20 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/17 16:34:35 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_input(char **argv)
{
	char **str;
	int i;
	int j;

	i = 0;
	while (argv[i])
	{
		str = ft_split(argv[i], ' ');
		j = 0;
		while (str[j])
		{
			if (!check(str[j]))
				return (0);
			j++;
		}
		free(str);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", check("2147483647"));
// 	return (0);
// }