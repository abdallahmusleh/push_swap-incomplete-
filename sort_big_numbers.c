/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 22:31:26 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/23 22:51:42 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*convert_to_indices_helper(s_list **list)
{
	s_list	*tmp_list;
	s_list	*tmp_list2;
	int		*arr;
	int		i;
	int		j;

	j = 0;
	arr = malloc(lst_size(list) * sizeof(int));
	if (!arr)
		return ;
	tmp_list = *list;
	while (tmp_list)
	{
		i = 0;
		tmp_list2 = *list;
		while (tmp_list2)
		{
			if (tmp_list->content > tmp_list2->content)
				i++;
			tmp_list2 = tmp_list2->next;
		}
		arr[j++] = i;
		tmp_list = tmp_list->next;
	}
	return (arr);
}
static void	convert_to_indices(s_list **list, int *arr)
{
	int	j;

	j = 0;
	arr = convert_to_indices_helper(list);
	while (list)
	{
		(*list)->content = arr[j];
		j++;
		list = (*list)->next;
	}
	free(arr);
}
static void	sorting_helper(s_list **stack_a, s_list **stack_b, int size,
		int maximumbits)
{
	int	i;
	int	j;

	i = 0;
	while (i < maximumbits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->content >> i) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			j++;
		}
		while (stack_a)
			pa(stack_a, stack_b);
		i++;
	}
}
void	sorter(s_list **stack_a)
{
	int size;
	int maximumbits;
	s_list *stack_b;
	int *arr;

	stack_b = NULL;
	size = lst_size(stack_a);
	maximumbits = 0;
	arr = NULL;
	convert_to_indices(stack_a, arr);
	while ((size - 1) >> maximumbits)
		maximumbits++;
	sorting_helper(stack_a, stack_b, size, maximumbits);
}
