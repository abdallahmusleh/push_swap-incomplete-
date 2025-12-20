/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/12/20 17:54:54 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/20 17:54:54 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


static void	swap(s_list **stack)
{
	if (!stack || !*stack || !(*stack)->next)
		return ;
	int tmp;
    tmp = (*stack) -> content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp;
}

void	sa(s_list **stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	sb(s_list **stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

void	ss(s_list **stack_a, s_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}
