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

	i = 0;
	if (argc <= 1)
		return (0);
    // if (argc == 2)
    // {
    //     while (list_a->next)
    //     {

    //     }
    // }
	while (*list_a->next)
	{
		if (not_number(argv) == 1)
			return (write(2, "Error\n", 6););
		list_a->content = ft_atoi(argv[i]);
		if (invalid_int(list_a->content) == 1)
			return (write(2, "Error\n", 6););
		if (issorted() == 1)
			return (write(2, "Error\n", 6););
		if (repeated_number() == 1)
			return (write(2, "Error\n", 6););
		list_a = list_a->next;
	}
}
