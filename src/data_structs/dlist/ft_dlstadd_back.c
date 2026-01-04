/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarcucc <lucas@student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:04:52 by lmarcucc          #+#    #+#             */
/*   Updated: 2026/01/04 13:11:14 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstadd_back(t_dlist **lst, t_dlist *new)
{
	t_dlist	*tmp;

	if (!lst || !new || (*lst == new))
		return ;
	if (!*lst)
	{
		*lst = new;
		(*lst)->next = NULL;
		(*lst)->prev = NULL;
	}
	else
	{
		tmp = ft_dlstlast(*lst);
		tmp->next = new;
		new->prev = tmp;
		new->next = NULL;
	}
}
