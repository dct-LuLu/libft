/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:55:55 by jaubry--          #+#    #+#             */
/*   Updated: 2024/09/03 16:01:04 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}

/*
#include <stdio.h>

int	main(void)
{
	t_list	*next;

	next = ft_lstnew("test");
	ft_lstadd_front(&next, ft_lstnew("first"));
	while (next != NULL)
	{
		printf("%s\n", (char *)next->content);
		next = next->next;
	}
	return (0);
}
*/
