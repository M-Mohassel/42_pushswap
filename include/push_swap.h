/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misi <misi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:50:00 by misi              #+#    #+#             */
/*   Updated: 2023/08/01 16:16:48 by misi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

typedef struct s_node
{
	int				num;
	int				index;
	int				flag;
	struct s_node	*next;
	struct s_node	*previous;
}	t_node;

typedef struct s_all
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		size_a;
	int		size_b;
	int		min;
	int		max;
	int		median;
	int		min_index_a;
}	t_all;

#endif