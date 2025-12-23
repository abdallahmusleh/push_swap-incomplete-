/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:19:52 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/23 22:51:48 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	smallest_in_second_to_last(s_list **stack_a, s_list **stack_b)
{
	rra(stack_a);
	rra(stack_a);
	pb(stack_a, stack_b);
}
void	sort5(s_list **stack_a, s_list **stack_b)
{
	long	first;
	long	second;
	long	third;
	long	fourth;
	long	fifth;

	first = (*stack_a)->content;
	second = (*stack_a)->next->content;
	third = (*stack_a)->next->next->content;
	fourth = (*stack_a)->next->next->next->content;
	fifth = (*stack_a)->next->next->next->next->content;
	if (first < second && first < third && first < fourth && first < fifth)
		pb(stack_a, stack_b);
	else if (first > second && second < third && second < fourth
			&& second < fifth)
		smallest_in_second(stack_a, stack_b);
	else if (first > third && second > third && third < fourth && third < fifth)
		smallest_in_third(stack_a, stack_b);
	else if (fifth < first && fifth < second && fifth < third && fifth < fourth)
		smallest_in_last(stack_a, stack_b);
	else if (fourth < first && fourth < second && fourth < third
			&& fifth > fourth)
		smallest_in_second_to_last(stack_a, stack_b);
	sort4(stack_a, stack_b);
	pa(stack_a, stack_b);
}
void	sorter_small(s_list **list)
{
	int		i;
	s_list	*stack_b;

	stack_b = NULL;
	i = lst_size(*list);
	if (i == 2)
		sort2(list);
	else if (i == 3)
		sorter3(list);
	else if (i == 4)
		sort4(list, stack_b);
	else
		sort5(list, stack_b);
}
