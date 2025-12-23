/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:19:30 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/23 22:51:46 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	smallest_in_second(s_list **stack_a, s_list **stack_b)
{
	sa(stack_a);
	pb(stack_a, stack_b);
}
void	smallest_in_third(s_list **stack_a, s_list **stack_b)
{
	ra(stack_a);
	ra(stack_a);
	pb(stack_a, stack_b);
}
void	smallest_in_last(s_list **stack_a, s_list **stack_b)
{
	rra(stack_a);
	pb(stack_a, stack_b);
}
void	sort4(s_list **stack_a, s_list **stack_b)
{
	long first;
	long second;
	long third;
	long fourth;

	first = (*stack_a)->content;
	second = (*stack_a)->next->content;
	third = (*stack_a)->next->next->content;
	fourth = (*stack_a)->next->next->next->content;
	if (first < second && first < third && first < fourth)
		pb(stack_a, stack_b);
	else if (first > second && second < third && second < fourth)
		smallest_in_second(stack_a, stack_b);
	else if (first > third && second > third && third < fourth)
		smallest_in_third(stack_a, stack_b);
	else if (fourth < second && fourth < third && first > fourth)
		smallest_in_last(stack_a, stack_b);
	sort3(stack_a);
	pa(stack_a, stack_b);
}
