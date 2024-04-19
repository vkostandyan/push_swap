/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:57:01 by vkostand          #+#    #+#             */
/*   Updated: 2024/04/19 18:56:26 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// #include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
    int value;
    struct s_list *next;
}               t_list;

//helpers
// void	ft_lstadd_back(t_list *lst, t_list *new);
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
long long	    ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int	    ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd);
void	ft_lstadd_front(t_list **lst, t_list *new);

// validation
int	is_number(char *str);
int	check_input(char **argv);
int have_dublicate(int *numbers);

// swap operations
void swap(t_list *stack);
void swap_a(t_list *stack_a);
void swap_b(t_list *stack_b);
void swap_both(t_list *stack_a, t_list *stack_b);

// push operations
void push(t_list *stack_from, t_list *stack_to);
void push_a(t_list *stack_b, t_list *stack_a);
void push_b(t_list *stack_a, t_list *stack_b);

// rotate operations
void    rotate(t_list **stack);
void    rotate_a(t_list **stack_a);
void    rotate_b(t_list **stack_b);
void    rotate_both(t_list **stack_a, t_list **stack_b);

// reverse rotate operations
void    reverse_rotate(t_list **stack);
void    reverse_rotate_a(t_list **stack_a);
void    reverse_rotate_b(t_list **stack_b);
void    reverse_rotate_both(t_list **stack_a, t_list **stack_b);

// Error 
// void print_error();


#endif