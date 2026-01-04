/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarcucc <lucas@student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:44:27 by lmarcucc          #+#    #+#             */
/*   Updated: 2026/01/04 12:52:02 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Function that allocates size bytes and copy the data from the old pointer
	and returns a new pointer.
*/
void	*ft_realloc(void *pnt, size_t old_size, size_t size)
{
	void	*new;

	if (size == 0)
		return (nul_error(pack_err(LFT_ID, LFT_E_ALOC_S), FL, LN, FC));
	new = ft_calloc(1, size);
	if (!new)
		return (NULL);
	if (!pnt)
		return (new);
	new = ft_memcpy(new, pnt, old_size);
	return (new);
}
