##
## Makefile for Makefile in /home/jeremy.elkaim/CPE_2016_corewar
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Fri Mar 31 11:44:33 2017 jeremy elkaim
## Last update Tue Apr  4 15:07:32 2017 jeremy elkaim
##

NAME1	= asm

NAME2	= corewar

RM	= rm -rf

all: libmy_core asm vm

libmy_core:
	@$(MAKE) -C my_lib;

asm: libmy_core
	@$(MAKE) -C asm;

vm: libmy_core
	@$(MAKE) -C vm;

clean:
	$(RM) $(OBJS)
	@$(MAKE) -C my_lib clean;
	@$(MAKE) -C asm clean;
	@$(MAKE) -C vm clean;

fclean: clean
	@$(MAKE) -C my_lib fclean;
	@$(MAKE) -C asm fclean;
	@$(MAKE) -C vm fclean;

re: fclean all

.PHONY: all clean fclean re
