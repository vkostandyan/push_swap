/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_optimal_step.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:23:41 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/27 14:24:38 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 1;
	while (i <= nb / 2 && i < 46341 && (i * i) < nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (i);
}

static int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (n % 2 != 0)
			return (0);
		n = n / 2;
	}
	return (1);
}

static int	ft_log2(int nb)
{
	int	i;
	int	log;

	i = nb;
	log = 0;
	while (i > 0)
	{
		if (is_power_of_2(i))
		{
			while (i > 1)
			{
				i /= 2;
				log++;
			}
			return (log);
		}
		i--;
	}
	return (0);
}

int	get_optimal_step(int len)
{
	return (ft_sqrt(len) + ft_log2(len) - 1);
}

// int main()
// {
// 	printf("%d", get_optimal_step(100));
// 	return (0);
// }
