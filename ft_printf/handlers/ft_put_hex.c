/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:53:51 by jaubry--          #+#    #+#             */
/*   Updated: 2024/11/16 19:06:12 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_handlers.h"

static void	ft_fill(char *charset, bool maj)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < 10)
	{
		charset[i] = i + '0';
		i++;
	}
	j = 0;
	while (j < 6)
	{
		charset[i + j] = j + 'a';
		if (maj)
			charset[i + j] -= 32;
		j++;
	}
}

static ssize_t	ft_recu_put_hex(long unsigned int nb, char *charset)
{
	if (nb > 0)
		return (ft_recu_put_hex(nb / 16, charset)
			+ ft_putchar((charset[nb % 16])));
	return (0);
}

ssize_t	ft_put_hex(long unsigned int nb, bool maj)
{
	ssize_t	write_len;
	char	charset[16];

	write_len = 0;
	ft_fill(charset, maj);
	if (nb == 0)
		write_len += ft_putchar('0');
	else
		write_len += ft_recu_put_hex(nb, charset);
	return (write_len);
}

ssize_t	ft_put_ptr(long unsigned int ptr)
{
	if (!ptr)
		return (ft_putstr_l("(nil)", 5));
	else
		return (ft_putstr_l("0x", 2) + ft_put_hex(ptr, false));
}

ssize_t	ft_put_unknown(char c)
{
	return (ft_putchar('%') + ft_putchar(c));
}

/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	unsigned int	nb;
	ssize_t	a;
	ssize_t	b;
	ssize_t	c;
	ssize_t	d;

	if (argc == 2)
	{
		nb = (unsigned int)atol(argv[1]);
		a = ft_put_hex((unsigned int)nb, false);
		ft_putchar('\n');
		b = ft_put_hex((unsigned int)nb, true);
		printf("\n\nprintf:\n");
		c = printf("%x", nb);
		printf("\n");
		d = printf("%X", nb);
		printf("\n\nret sizes:\nft_put_hex:\t%zu\nft_put_HEX:", a);
		printf("\t%zu\nprintf hex:\t%zu\nprintf HEX:\t%zu\n", b, c, d);
	}

	char *ptr = malloc(1);
	printf("%p\n", ptr);
	ft_put_ptr((long unsigned int)ptr);
	printf("\n\n%p\n", NULL);
	ft_put_ptr((long unsigned int)NULL);
	free(ptr);
	return (0);
}
*/
