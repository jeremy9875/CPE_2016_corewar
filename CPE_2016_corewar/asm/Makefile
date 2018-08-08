##
## Makefile for Makefile in /home/jeremy.elkaim/CPE_2016_corewar/asmb
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Fri Mar 31 11:41:38 2017 jeremy elkaim
## Last update Sat Apr  1 14:09:44 2017 Arnaud DEMANGE
##

CC	= 	gcc

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror -pedantic

LIBINC	=	-I ../my_lib/include

LIB	=	-L ../my_lib -lmy_comp

INC	=	-I include/

NAME    = 	asm

SRCS    = 	src/core.c			\
		src/fill_core.c			\
		src/my_base_functions.c		\
		src/display_help.c		\

OBJS   	= 	$(SRCS:.c=.o)

all:	my_lib $(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) $(LIB)

my_lib:
		@$(MAKE) -C ../my_lib;

clean:
		$(RM) $(OBJS)
		@$(MAKE) -C ../my_lib clean;

fclean:		clean
		$(RM) $(NAME)
		@$(MAKE) -C ../my_lib fclean;

re:		fclean all

.PHONY:		all clean fclean re
