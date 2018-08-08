/*
** corewar.h for corewar in /home/jeremy.elkaim/CPE_2016_corewar/vm/include
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Mar 31 11:45:57 2017 jeremy elkaim
** Last update Fri Mar 31 15:08:57 2017 jeremy elkaim
*/

#ifndef _COREWAR_H_
# define _COREWAR_H_

# define HELP "-h\0"
# define NB_CYCLE "-dump\0"
# define PROG_NB "-n\0"
# define LOAD_ADD "-a\0"
# define COR ".cor\0"

void	help(char **av);
int	checklabel();
int	my_strlen(char *av);
int	check_argv(int ac, char **av);
int	vm(char **av);
int	checkdump(char **av);
int	checkn(char **av);
int	checka(char **av);
int	main(int ac, char **av);

#endif /* !COREWAR_H_ */
