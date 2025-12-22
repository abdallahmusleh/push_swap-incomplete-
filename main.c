/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:06:06 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/21 19:00:14 by abmusleh         ###   ########.fr       */
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
			return (write(2, "Error\n", 6));
		node = ft_lstnew(value);//ft_atolong(argv[i])
		if (!node)
			return (write(2, "Error\n", 6)); //is this protection necessary?
		ft_lstadd_back(&list_a, node);
		i++;
	}
	if (repeated_number(list_a) == 1)
		return (write(2, "Error\n", 6));
	if (issorted(list_a) == 1)
		return (write(2, "Error\n", 6));//or 0;
	return(0);
}
