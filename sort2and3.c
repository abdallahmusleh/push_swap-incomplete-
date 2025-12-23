/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2and3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 19:35:06 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/23 22:51:44 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(s_list **list)
{
	sa(list);
}
void	sort3(s_list **list)
{
	if ((*list)->content < (*list)->next->content
		&& (*list)->content < (*list)->next->next->content)
	{
		rra(list);
		sa(list);
	}
	else if ((*list)->content > (*list)->next->content
			&& (*list)->content < (*list)->next->next->content)
		sa(list);
	else if ((*list)->content < (*list)->next->content
			&& (*list)->content > (*list)->next->next->content)
		rra(list);
	else if ((*list)->content > (*list)->next->content
			&& (*list)->content > (*list)->next->next->content
			&& (*list)->next->content > (*list)->next->next->content)
	{
		ra(list);
		sa(list);
	}
	else if ((*list)->content > (*list)->next->content
			&& (*list)->content > (*list)->next->next->content
			&& (*list)->next->content < (*list)->next->next->content)
		ra(list);
}
