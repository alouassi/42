/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouassi <alouassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:51:24 by alouassi          #+#    #+#             */
/*   Updated: 2023/07/07 17:01:18 by alouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

t_stack		*ft_lstnew(int value);
long int	ft_atoi(const char *str);
void		ft_free(char **str);
void		ft_push(t_stack **to, t_stack **from);
void		init_stack(t_stack **stack, int argc, char **argv);
void		index_stack(t_stack **stack);
void		ft_pa(t_stack **stack_a, t_stack **stack_b);
void		ft_pb(t_stack **stack_a, t_stack **stack_b);
void		ft_rev_rotate(t_stack **stack);
void		ft_rra(t_stack **stack_a);
void		ft_rrb(t_stack **stack_b);
void		ft_rrr(t_stack **stack_a, t_stack **stack_b);
void		ft_rotate(t_stack **stack);
void		ft_ra(t_stack **stack_a);
void		ft_rb(t_stack **stack_b);
void		ft_rr(t_stack **stack_a, t_stack **stack_b);
void		ft_swap(t_stack **stack);
void		ft_sa(t_stack **stack_a);
void		ft_sb(t_stack **stack_b);
void		ft_ss(t_stack **stack_a, t_stack **stack_b);
void		ft_free(char **str);
void		free_stack(t_stack **stack);
void		ft_error(char *m);
t_stack		*ft_lstnew(int value);
void		ft_lstadd_front(t_stack **stack, t_stack *new);
int			ft_lstsize(t_stack *a);
t_stack		*ft_lstlast(t_stack *a);
void		ft_lstadd_back(t_stack **stack, t_stack *frist);
void		ft_argument(int argc, char **argv);
void		ft_sort3(t_stack **stack);
void		ft_sort5(t_stack **stack_a, t_stack **stack_b);
int			get_size(t_stack *stack);
void		ft_algomax(t_stack **stack_a, t_stack **stack_b, int tailemax);
t_stack		*ft_maxval(t_stack **stack);
void		ft_algo2(t_stack **stack_a,t_stack **stack_b);
int			ft_posi(t_stack **stack, t_stack **max);
#endif
