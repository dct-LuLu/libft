/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarcucc <lucas@student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:09:06 by lmarcucc          #+#    #+#             */
/*   Updated: 2026/01/04 12:54:07 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Function that frees a pointer a set its pointer value to NULL.
*/
void	ft_free(void *pnt)
{
	if (!pnt)
		return ;
	free(pnt);
	pnt = NULL;
}
