/*
** corewar.c for corewar in /home/jeremy.elkaim/CPE_2016_corewar/vm/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Mar 31 11:47:00 2017 jeremy elkaim
** Last update Sun Apr  2 19:45:41 2017 jeremy elkaim
*/
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/corewar.h"
#include "../../my_lib/include/lib.h"

int	vm(char **av)
{
  int	fd;
  char	buffer[255];

  fd = open("keelzu.cor", O_RDONLY);
  if (fd == -1)
    {
      my_putstr("Error openning file\n");
      return (-1);
    }
  read(fd, buffer, 256);
  close (fd);
  my_putstr("vm");
  return (0);
}

int	main(int ac, char **av)
{
  int	i;

  i = 1;
  if (ac >= 2)
    {
      while (i != ac)
	{
	  if (my_strcmp(HELP, av[i], 0) == 0)
	    help(av);
	  else if (my_strcmp(NB_CYCLE, av[i], 0) == 0)
	    checkdump(av);
	  else if (my_strcmp(LOAD_ADD, av[i], 0) == 0)
	    checka(av);
	  else if (my_strcmp(PROG_NB, av[i], 0) == 0)
	    checkn(av);
	  else if (my_strcmp(COR, av[i], 0) == 0)
	    vm(av);
	  i++;
	}
    }
  else
    return (84);
}
