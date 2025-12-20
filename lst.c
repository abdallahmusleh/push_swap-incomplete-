/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 20:27:36 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/20 22:35:44 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

s_list	*ft_lstnew(int *content)
{
	s_list	*node;

	node = malloc(sizeof(s_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
void	*ft_lstadd_back(s_list **list, s_list *new)
{
	if (!list || !new)
		return ;
	if (*list == NULL)
	{
		*list = new;
		return ;
	}
	s_list *tmp;
	tmp = *list;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}