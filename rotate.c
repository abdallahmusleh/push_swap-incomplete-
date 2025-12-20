/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/12/20 17:54:46 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/20 17:54:46 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


static void	rotate(s_list **stack)
{
	if (!stack || !*stack || !(*stack)->next) //extra things to add?
		return ;
	s_list *primary;
	s_list *tmp;
	primary = *stack;
	*stack = (*stack)->next;
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = primary;
	primary->next = NULL;
}
void	ra(s_list **stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}
void	rb(s_list **stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}
void	rr(s_list **stack_a, s_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}
