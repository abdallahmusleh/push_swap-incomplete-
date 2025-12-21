/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2to5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 19:35:06 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/21 19:58:20 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(s_list **list)
{
	sa(list);
}
void	sort3(s_list **list, s_list **list2)
{
	if ((*list)->content < (*list)->next->content
		&& (*list)->content < (*list)->next->next->content)
	{
		pb(list, list2);
		sa(list);
		pa(list, list2);
	}
	if ((*list)->content > (*list)->next->content
		&& (*list)->content < (*list)->next->next->content)
		sa(list);
	if ((*list)->content < (*list)->next->content
		&& (*list)->content > (*list)->next->next->content)
		rra(list);
	if ((*list)->content > (*list)->next->content
		&& (*list)->content > (*list)->next->next->content
		&& (*list)->next->content > (*list)->next->next->content)
	{
		ra(list);
		sa(list);
	}
	if ((*list)->content > (*list)->next->content
		&& (*list)->content > (*list)->next->next->content
		&& (*list)->next->content < (*list)->next->next->content)
		ra(list);
}
void	sort4(s_list **stack_a, s_list **stack_b)
{
	int smallest_value;
	smallest_value = (*stack_a) -
}