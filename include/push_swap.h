/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misi-moh <misi-moh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:50:00 by misi              #+#    #+#             */
/*   Updated: 2023/09/19 10:35:18 by misi-moh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

int		ft_checkdup(t_stack *a);
int		ft_checksorted(t_stack *stack_a);

t_stack	*ft_lstlast(t_stack *lst);
int		ft_lstsize(t_stack *lst);
int		ft_min(t_stack *a);
int		ft_max(t_stack *a);

int		ft_find_index(t_stack *a, int nbr);
int		ft_find_place_b(t_stack *stack_b, int nbr_push);
int		ft_find_place_a(t_stack *stack_a, int nbr_push);

void	ft_ra(t_stack **a, int j);
void	ft_sa(t_stack **a, int j);
void	ft_pa(t_stack **a, t_stack **b, int j);
void	ft_rra(t_stack **a, int j);
void	ft_ss(t_stack **a, t_stack **b, int j);

void	ft_rr(t_stack **a, t_stack **b, int j);
void	ft_rrr_sub(t_stack **b, int j);
void	ft_rrr(t_stack **a, t_stack **b, int j);
void	ft_pb(t_stack **stack_a, t_stack **stack_b, int j);
void	ft_rrb(t_stack **b, int j);

void	ft_rb(t_stack **b, int j);
void	ft_sb(t_stack **b, int j);

int		ft_atoi2(const char *str);
t_stack	*ft_sub_process(char **argv);
void	ft_error(void);
t_stack	*ft_process(int argc, char **argv);

void	ft_free(t_stack **lst);

int		ft_apply_rarb(t_stack **a, t_stack **b, int c, char s);
int		ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s);
int		ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s);
int		ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s);

int		ft_rotate_type_ba(t_stack *a, t_stack *b);
int		ft_rotate_type_ab(t_stack *a, t_stack *b);

int		ft_case_rarb(t_stack *a, t_stack *b, int c);
int		ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int		ft_case_rrarb(t_stack *a, t_stack *b, int c);
int		ft_case_rarrb(t_stack *a, t_stack *b, int c);

int		ft_case_rarb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rrarrb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rarrb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rrarb_a(t_stack *a, t_stack *b, int c);

void	ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b);
t_stack	*ft_sort_b(t_stack **stack_a);
t_stack	**ft_sort_a(t_stack **stack_a, t_stack **stack_b);
void	ft_sort(t_stack **stack_a);
void	ft_sort_three(t_stack **stack_a);

void	ft_freesplit(char **lst);

t_stack	*ft_stack_new(int content);
void	ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack	*ft_lstlast(t_stack *lst);

#endif