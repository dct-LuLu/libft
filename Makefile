# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 01:19:17 by jaubry--          #+#    #+#              #
#    Updated: 2025/08/15 22:12:16 by jaubry--         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ROOTDIR		?= .
include $(ROOTDIR)/mkidir/make_utils.mk

# Directories
CDIR		= libft
SRCDIR		= src
INCDIR		= include
OBJDIR		= .obj
DEPDIR		= .dep

# Output
NAME		= libft.a

# Compiler and flags
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
DFLAGS		= -MMD -MP -MF $(DEPDIR)/$*.d
IFLAGS		= -I$(INCDIR)

VFLAGS		= -D DEBUG=$(DEBUG)

CFLAGS		+= $(DEBUG_FLAGS) $(FFLAGS) $(VFLAGS)
CF			= $(CC) $(CFLAGS) $(IFLAGS)

AR          = $(if $(findstring -flto,$(CC)),llvm-ar,ar) $(SILENCE)
ARFLAGS		= rcs
RANLIB      = $(if $(findstring -flto,$(CC)),llvm-ranlib,ranlib) $(SILENCE)

# VPATH
vpath %.h $(INCDIR)
vpath %.o $(OBJDIR)
vpath %.d $(DEPDIR)

# Sources
MKS			= io/io.mk alloc/alloc.mk parsing/parsing.mk \
			  conversion/conversion.mk mem_utils/mem_utils.mk \
			  str_utils/str_utils.mk strr_utils/strr_utils.mk \
			  data_structs/data_structs.mk utils/utils.mk

include $(addprefix $(SRCDIR)/, $(MKS))

OBJS		= $(addprefix $(OBJDIR)/, $(notdir $(SRCS:.c=.o)))
DEPS		= $(addprefix $(DEPDIR)/, $(notdir $(SRCS:.o=.d)))



all:	$(NAME)
fast:	$(NAME)
debug:	$(NAME)

$(NAME): $(OBJS)
	$(call ar-msg)
	@$(AR) $(ARFLAGS) $@ $^
ifeq ($(FAST),1)
	@$(RANLIB) $@
endif
	$(call ar-finish-msg)

$(OBJDIR)/%.o: %.c | buildmsg $(OBJDIR) $(DEPDIR)
	$(call lib-compile-obj-msg)
	@$(CF) $(DFLAGS) -c $< -o $@

$(OBJDIR) $(DEPDIR):
	$(call create-dir-msg)
	@mkdir -p $@

buildmsg:
ifneq ($(shell [ -f $(NAME) ] && echo exists),exists)
	$(call lib-build-msg)
endif

help:
	@echo "Available targets:"
	@echo "  all     : Build the library"
	@echo "  clean   : Remove object files"
	@echo "  fclean  : Remove object files and library"
	@echo "  re      : Rebuild everything"

clean:
	$(call rm-obj-msg)
	@rm -rf $(OBJDIR) $(DEPDIR)

fclean: clean
	$(call rm-lib-msg)
	@rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re debug help buildmsg
