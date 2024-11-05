/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:35:40 by jaubry--          #+#    #+#             */
/*   Updated: 2024/09/03 16:54:43 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*next;

	next = lst;
	while (next)
	{
		f(next->content);
		next = next->next;
	}
}

/*
#include <stdio.h>

void	show(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("1");
	ft_lstadd_back(&lst, ft_lstnew("2"));
	ft_lstadd_back(&lst, ft_lstnew("3"));
	ft_lstiter(lst, &show);
	return (0);
}
*/
