##
## Makefile for Makefile in /home/jeremy.elkaim/CPE_2016_corewar/my_lib
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Fri Mar 31 11:45:06 2017 jeremy elkaim
## Last update Fri Mar 31 11:45:07 2017 jeremy elkaim
##

CC	= gcc

RM	= rm -rf

CFLAGS	+= -Wall -Wextra -Werror -pedantic

lib	+= -I include/

NAME	= libmy_comp.a

SRCS	= src/write.c		\

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
