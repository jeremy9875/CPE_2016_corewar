##
## Makefile for makefile in /home/jeremy.elkaim/CPE_2016_corewar/vm
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Fri Mar 31 11:48:20 2017 jeremy elkaim
## Last update Fri Mar 31 11:48:20 2017 jeremy elkaim
##

CC	= gcc

RM	= rm -rf

INC	= -I include/

LIBINC	+= -I ../my_lib/include

LDFLAGS	= -L ../my_lib -lmy_comp

NAME	= corewar

SRCS	= src/corewar.c		\
	  src/check_arg.c	\
	  src/core.c		\

OBJS	= $(SRCS:.c=.o)

all: lib_my $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

lib_my:
	@$(MAKE) -C ../my_lib;

clean:
	$(RM) $(OBJS)
	@$(MAKE) -C ../my_lib clean;

fclean:	clean
	$(RM) $(NAME)
	@$(MAKE) -C ../my_lib fclean;

re: fclean all

.PHONY: all clean fclean re
