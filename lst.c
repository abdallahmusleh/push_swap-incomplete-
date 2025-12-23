/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 20:27:36 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/23 22:49:11 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

s_list	*ft_lstnew(long content)
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
	s_list	*tmp;

	if (!list || !new)
		return ;
	if (*list == NULL)
	{
		*list = new;
		return ;
	}
	tmp = *list;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
int	lst_size(s_list *list)
{
	int	i;

	i = 1;
	if (!list)
		return (0);
	while (list->next)
	{
		list = list->next;
		i++;
	}
	return (i);
}
void	lst_clear(s_list **list)
{
	if (!list || !*list)
		return ;
	s_list *tmp1;
	s_list *tmp2;
	tmp1 = *list;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		free(tmp1);
		tmp1 = tmp2;
	}
	*list = NULL;
}
