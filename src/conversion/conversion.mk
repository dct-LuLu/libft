# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    conversion.mk                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaubry-- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/08 08:59:31 by jaubry--          #+#    #+#              #
#    Updated: 2025/03/08 11:56:56 by jaubry--         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Directories
CONV_DIR	= $(SRCDIR)/conversion
CHAR_DIR	= $(CONV_DIR)/char
TYPES_DIR	= $(CONV_DIR)/types

# Source files
CHAR_SRCS	= ft_tolower.c ft_toupper.c
CHAR_SRCS	:= $(addprefix $(CHAR_DIR)/, $(CHAR_SRCS))

TYPES_SRCS	= ft_atoi.c ft_itoa.c ratoi.c
TYPES_SRCS	:= $(addprefix $(TYPES_DIR)/, $(TYPES_SRCS))

SRCS		+= $(CHAR_SRCS) $(TYPES_SRCS)

# VPATH
vpath %.c $(CHAR_DIR) $(TYPES_DIR)
