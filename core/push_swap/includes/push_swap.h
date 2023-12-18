/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:54:44 by sspilka           #+#    #+#             */
/*   Updated: 2023/10/04 16:07:36 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include "../libft/libft.h"

// Stack
typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}		t_list;

// Util functions
t_list	*ft_lstnew(int value);
t_list	*ft_lstlast(t_list *head);
void	ft_lstadd_front(t_list **stack, t_list *new);
void	ft_lstadd_back(t_list **stack, t_list *new);
int		ft_lstsize(t_list *head);

void	ft_check_args(int argc, char **argv);
void	index_stack(t_list **stack);

void	ft_free(char **str);
void	free_stack(t_list **stack);

int		is_sorted(t_list **stack);
int		get_distance(t_list **stack, int index);
void	make_top(t_list **stack, int distance);
void	ft_error(char *msg);

// Instructions
int		swap(t_list **stack);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);

int		push(t_list **stack_to, t_list **stack_from);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_a, t_list **stack_b);

int		rotate(t_list **stack);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);

int		reverse_rotate(t_list **stack);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);

// Algorithms
void	radix_sort(t_list **stack_a, t_list **stack_b);
void	simple_sort(t_list **stack_a, t_list **stack_b);

#endif
