/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmusleh <abmusleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:03:39 by abmusleh          #+#    #+#             */
/*   Updated: 2025/12/20 22:35:49 by abmusleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP.h
# define PUSHSWAP .h

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_list
{
	long	content;
	s_list	*next;
}			s_list;
long		ft_atolong(const char *nptr);
s_list		*ft_lstnew(int *content);
void		*ft_lstadd_back(s_list **list, s_list *new);
#endif
