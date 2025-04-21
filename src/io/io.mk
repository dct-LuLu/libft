# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    io.mk                                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarcucc <lucas@student.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/08 08:58:24 by jaubry--          #+#    #+#              #
#    Updated: 2025/03/26 16:18:21 by lmarcucc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Directories
IO_DIR		= $(SRCDIR)/io
PUT_DIR		= $(IO_DIR)/ft_put
GNL_DIR		= $(IO_DIR)/get_next_line
PRINTFS_DIR	= $(IO_DIR)/ft_printfs
HANDLE_DIR	= $(PRINTFS_DIR)/handlers

# Source files
PUT_SRCS	= ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c

GNL_SRCS	= get_next_line.c get_next_line_utils.c
GNL_SRCS	:= $(addprefix $(GNL_DIR)/, $(GNL_SRCS))

PRINTFS_SRCS= ft_handlers_utils.c ft_put_hex.c ft_putnbr.c write_utils.c
PRINTFS_SRCS:= $(addprefix $(HANDLE_DIR)/, $(PRINTFS_SRCS)) \
			   $(PRINTFS_DIR)/ft_printfs.c

SRCS		+= $(GNL_SRCS) $(PRINTFS_SRCS) $(PUT_SRCS)

# VPATH
vpath %.c $(PRINTFS_DIR) $(HANDLE_DIR) $(GNL_DIR) $(PUT_DIR)
