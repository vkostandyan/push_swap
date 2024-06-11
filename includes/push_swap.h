/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:57:01 by vkostand          #+#    #+#             */
/*   Updated: 2024/06/11 20:04:05 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "get_next_line.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next;
}					t_list;

t_list				*fill_stack_values(char **argv);
void				free_stack(t_list *stack_a, char **argv);
void				free_split(char **str);

t_list				*ft_lstnew(int content);
void				ft_lstadd_back(t_list **lst, t_list *new);
long long			ft_atoi(const char *str);
char				**ft_split(char const *s, char c);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
int					ft_strlen(const char *s);
void				ft_putstr_fd(char *s, int fd);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_strcmp(const char *s1, char *s2);

int					is_number(char *str);
int					is_zero(char *str);
int					*take_numbers(char **argv, int len);
int					count_len(char **argv);
int					check_input(int argc, char **argv);
int					not_empty(char **argv);
int					ft_issign(char c);
int					ft_isdigit(char c);

int					is_sorted(t_list **stack);

int					get_optimal_step(int len);
void				push_swap(char **argv, t_list **stack_a, t_list **stack_b);
void				sort(t_list **stack_a, t_list **stack_b, int *arr, int len);
void				push_back(t_list **stack_a, t_list **stack_b, int len);

void				sort_for2(t_list **stack);
void				sort_for3(t_list **stack_a);
void				sort_for4(t_list **stack_a, t_list **stack_b, char **argv);
void				sort_for5(t_list **stack_a, t_list **stack_b, char **argv);

void				swap(t_list **stack);
void				swap_a(t_list **stack_a, int flag);
void				swap_b(t_list **stack_b, int flag);
void				swap_both(t_list **stack_a, t_list **stack_b, int flag);

void				push(t_list **stack_from, t_list **stack_to);
void				push_a(t_list **stack_b, t_list **stack_a, int flag);
void				push_b(t_list **stack_a, t_list **stack_b, int flag);

void				rotate(t_list **stack);
void				rotate_a(t_list **stack_a, int flag);
void				rotate_b(t_list **stack_b, int flag);
void				rotate_both(t_list **stack_a, t_list **stack_b, int flag);

void				reverse_rotate(t_list **stack);
void				reverse_rotate_a(t_list **stack_a, int flag);
void				reverse_rotate_b(t_list **stack_b, int flag);
void				reverse_rotate_both(t_list **stack_a, t_list **stack_b,
						int flag);

#endif