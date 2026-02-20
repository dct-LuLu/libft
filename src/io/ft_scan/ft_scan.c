/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scan.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 16:31:07 by jaubry--          #+#    #+#             */
/*   Updated: 2026/02/20 16:31:11 by jaubry--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"
#include "lft_xcerrcal.h"

static void			skip_wildcard(const char **line, char char_to_skip);
int					parse_type(va_list *args, const char **line,
						int line_num, const char *format);
static int			verif_char(const char *format,
						const char **line, int line_num);
const char			*skip_range(const char *format);

static inline int	handle_optional_token(
	va_list *copy, const char **format, const char **line)
{
	if ((*format)[0] && (*format)[1] == '*')
	{
		skip_wildcard(line, **format);
		++*format;
	}
	else if (**format == '%')
	{
		++*format;
		if (parse_type(copy, line, -1, *format) == -1)
			return (-1);
		*format = skip_range(*format);
	}
	else if (verif_char(*format, line, -1) == -1)
		return (-1);
	return (0);
}

void	scan_optional_arg(
	va_list *args, const char **format, const char **line)
{
	const char	*line_backup;
	va_list		copy;

	line_backup = *line;
	++*format;
	va_copy(copy, *args);
	while (**format && **format != ')')
	{
		if (handle_optional_token(&copy, format, line) == -1)
		{
			*line = line_backup;
			break ;
		}
		++*format;
	}
	*format = ft_strchr(*format, ')') + 1;
}

int	ft_scan(int line_num, const char *format, const char *line, ...)
{
	va_list		args;

	va_start(args, line);
	while (*format)
	{
		if (format[0] == '(')
			scan_optional_arg(&args, &format, &line);
		if (format[0] && format[1] == '*')
		{
			skip_wildcard(&line, *format);
			++format;
		}
		else if (*format == '%')
		{
			++format;
			if (parse_type(&args, &line, line_num, format) == -1)
				return (-1);
			format = skip_range(format);
		}
		else if (verif_char(format, &line, line_num) == -1)
			return (-1);
		++format;
	}
	return (0);
}

static int	verif_char(const char *format, const char **line, int line_num)
{
	if (*format != **line && !(**line == '\0' && *format == '\n')
		&& !(ft_isspace(*format) && ft_isspace(**line)))
	{
		if (line_num == -1)
			return (-1);
		if (*format == '\n')
		{
			register_complex_err_msg(LFT_E_MSG_WRN_NEWLINE, **line, "newline");
			return (error(pack_err(LFT_ID, LFT_E_WRN_NEWLINE), FL, LN, FC));
		}
		register_complex_err_msg(LFT_E_MSG_WRN_CHAR, **line, *format);
		return (error(pack_err(LFT_ID, LFT_E_WRN_CHAR), FL, LN, FC));
	}
	++*line;
	return (0);
}

static void	skip_wildcard(const char **line, const char char_to_skip)
{
	while (**line == char_to_skip
		|| (ft_isspace(char_to_skip) && ft_isspace(**line)))
		++*line;
}
