/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:31:01 by jaubry--          #+#    #+#             */
/*   Updated: 2024/11/05 16:21:26 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*next;

	next = lst;
	if (next)
	{
		while (next->next)
			next = next->next;
	}
	return (next);
}

/*
#include <stdio.h>

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("3");
	ft_lstadd_front(&lst, ft_lstnew("2"));
	ft_lstadd_front(&lst, ft_lstnew("1"));
	

	printf("last: %s\n", (char *)ft_lstlast(lst)->content);
	return (0);
}
*/
