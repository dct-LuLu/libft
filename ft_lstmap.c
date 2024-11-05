/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:36:13 by jaubry--          #+#    #+#             */
/*   Updated: 2024/10/22 17:18:39 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;

	if (!lst)
		return (NULL);
	while (lst)
	{
		if (!first)
		{
			if (lst->content)
				first = ft_lstnew(f(lst->content));
			else
				del(lst->content);
		}
		else
		{
			if (lst->content)
				ft_lstadd_back(&first, ft_lstnew(f(lst->content)));
			else
				del(lst->content);
		}
		lst = lst->next;
	}
	return (first);
}

/*

#include <stdio.h>

void	show(void *content)
{
	printf("%s\n", (char *)content);
}

void	*zero(void *str)
{
	char	*j;

	j = ft_strdup((char *)str);
	j[0] = '0';
	return ("0");
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("1");
	ft_lstadd_back(&lst, ft_lstnew("2"));
	ft_lstadd_back(&lst, ft_lstnew("3"));
	ft_lstiter(lst, &show);
	printf("\n");
	ft_lstiter(ft_lstmap(lst, &zero, &free), &show);
	return (0);
}
*/
