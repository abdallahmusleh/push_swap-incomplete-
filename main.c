/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:06:06 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/17 23:10:48 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	s_list	*list_a;
	s_list	*node;

	i = 1;
	if (argc <= 1)
		return (0);
	if (not_number(argv) == 1)
		return (write(2, "Error\n", 6));
	while (i < argc)
	{
		node = ft_lstnew(ft_atolong(argv[i]));
		ft_lstadd_back(list_a, node);
		i++;
	}
	if (invalid_int(list_a->content) == 1)
		return (write(2, "Error\n", 6));
	if (issorted() == 1)
		return (write(2, "Error\n", 6));
	if (repeated_number() == 1)
		return (write(2, "Error\n", 6));
}
