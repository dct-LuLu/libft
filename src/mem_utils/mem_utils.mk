# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    mem_utils.mk                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaubry-- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/08 09:14:34 by jaubry--          #+#    #+#              #
#    Updated: 2025/03/08 11:56:26 by jaubry--         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Directories
MEM_DIR		= $(SRCDIR)/mem_utils

# Source files
MEM_SRCS	= ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
			  ft_bzero.c
SRCS		+= $(addprefix $(MEM_DIR)/, $(MEM_SRCS))

# VPATH
vpath %.c $(MEM_DIR)
