/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:06:06 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/23 22:48:15 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	long	value;
	s_list	*list_a;
	s_list	*node;

	i = 1;
	if (argc <= 1)
		return (0);
	if (not_number(argv) == 1)
		return (write(2, "Error\n", 6));
	while (i < argc)
	{
		value = ft_atolong(argv[i]);
		if (invalid_int(value) == 1)
			return (write(2, "Error\n", 6));//lstclear for all
		node = ft_lstnew(value);//ft_atolong(argv[i])
		if (!node)
		{
			lst_clear(&list_a);
			return (write(2, "Error\n", 6)); //is this protection necessary?
		}
		ft_lstadd_back(&list_a, node);
		i++;
	}
	if (repeated_number(list_a))
	{
		lst_clear(&list_a);
		return (write(2, "Error\n", 6));
	}
	if (issorted(list_a) || lst_size(list_a) == 1)
	{
		lst_clear(list_a);
		return(0);
	}
	if (lst_size(list_a) <= 5)
		sorter_small(&list_a);
	else
		sorter(&list_a);
	ft_lstclear(&list_a);
	return(0);
}
