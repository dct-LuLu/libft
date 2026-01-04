# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaubry-- <jaubry--@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 01:19:17 by jaubry--          #+#    #+#              #
#    Updated: 2026/01/04 21:39:09 by jaubry--         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ROOTDIR		?= .
include $(ROOTDIR)/mkidir/make_utils.mk

LIBNAME		= libft

# Directories
CDIR		= $(LIBNAME)
SRCDIR		= src
OBJDIR		= .obj
DEPDIR		= .dep

XCERRCALDIR	= $(LIBDIR)/xcerrcal
LIBFTDIR	= $(LIBDIR)/libft

# Includes
include $(XCERRCALDIR)/includes.mk includes.mk

INCLUDES	= $(INCDIRS_LIBFT) \
			  $(addprefix $(XCERRCALDIR)/, $(INCDIRS_XCERRCAL))

# Output
NAME		= $(LIBNAME).a
XCERRCAL	= $(XCERRCALDIR)/libxcerrcal.a


# Compiler and flags
CC			= cc

CFLAGS		= -Wall -Wextra -Werror \
			  -std=gnu11

DFLAGS		= -MMD -MP -MF $(DEPDIR)/$*.d

IFLAGS		= $(addprefix -I,$(INCLUDES))

CFLAGS		+= $(INSPECT_FLAGS) $(PROFILE_FLAGS) $(FFLAGS)
CF			= $(CC) $(CFLAGS) $(IFLAGS)

AR          = $(if $(findstring -flto,$(FFLAGS)),$(FAST_AR),$(STD_AR))
ARFLAGS		= rcs
RANLIB      = $(if $(findstring -flto,$(FFLAGS)),$(FAST_RANLIB),$(STD_RANLIB))

# VPATH
vpath %.h $(INCLUDES)
vpath %.o $(OBJDIR) $(XCERRCALDIR)/$(OBJDIR)
vpath %.d $(DEPDIR) $(XCERRCALDIR)/$(DEPDIR)

# Sources
include $(SRCDIR)/srcs.mk

OBJS		= $(addprefix $(OBJDIR)/, $(notdir $(SRCS:.c=.o)))
DEPS		= $(addprefix $(DEPDIR)/, $(notdir $(SRCS:.o=.d)))



all:	$(NAME)
fast:	$(NAME)
debug:	$(NAME)

$(NAME): $(XCERRCAL) $(OBJS)
	$(call ar-msg)
	@$(AR) $(ARFLAGS) $@ $^
ifeq ($(FAST),1)
	@$(RANLIB) $@
endif
	$(call ar-finish-msg)

$(XCERRCAL):
	@$(MAKE) -s -C $(XCERRCALDIR) $(RULE) ROOTDIR=../..

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

print-% : ; $(info $* is a $(flavor $*) variable set to [$($*)]) @true

clean:
	@$(MAKE) -s -C $(XCERRCALDIR) clean ROOTDIR=../..
	$(call rm-obj-msg)
	@rm -rf $(OBJDIR) $(DEPDIR)

fclean:
	@$(MAKE) -s -C $(XCERRCALDIR) fclean ROOTDIR=../..
	$(call rm-obj-msg)
	@rm -rf $(OBJDIR) $(DEPDIR)
	$(call rm-lib-msg)
	@rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re debug help buildmsg print-%
