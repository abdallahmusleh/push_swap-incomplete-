/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:03:39 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/23 22:51:03 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP.h
# define PUSHSWAP .h

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_list
{
	long	content;
	s_list	*next;
}			s_list;
long		ft_atolong(const char *nptr);
s_list		*ft_lstnew(long content);
void		*ft_lstadd_back(s_list **list, s_list *new);
int			lst_size(s_list *list);
void		lst_clear(s_list **list);
void		pa(s_list **stack_a, s_list **stack_b);
void		pb(s_list **stack_a, s_list **stack_b);
int			main(int argc, char **argv);
void		rra(s_list **stack_a);
void		rrb(s_list **stack_b);
void		rrr(s_list **stack_a, s_list **stack_b);
void		ra(s_list **stack_a);
void		rb(s_list **stack_b);
void		rr(s_list **stack_a, s_list **stack_b);
void		sa(s_list **stack_a);
void		sb(s_list **stack_b);
void		ss(s_list **stack_a, s_list **stack_b);
int			not_number(char *str[]);
int			invalid_int(long x);
int			issorted(s_list *node);
int			repeatednumber(s_list *list);
void		sort2(s_list **list);
void		sort3(s_list **list);
void		smallest_in_second(s_list **stack_a, s_list **stack_b);
void		smallest_in_third(s_list **stack_a, s_list **stack_b);
void		smallest_in_last(s_list **stack_a, s_list **stack_b);
void		sort4(s_list **stack_a, s_list **stack_b);
void		sort5(s_list **stack_a, s_list **stack_b);
void		sorter(s_list **stack_a);
void		sorter_small(s_list **list);
#endif
