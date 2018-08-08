/*
** my_base_functions.c for my_base_functions in /home/jeremy.elkaim/CPE_2016_corewar/asmb/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Mar 31 11:43:04 2017 jeremy elkaim
** Last update Sun Apr  2 19:44:29 2017 jeremy elkaim
*/
#include "../include/corewar.h"
#include "../../my_lib/include/lib.h"

int	check_argv(int ac, char **av)
{
  int   x;
  int   y;

  x = 0;
  y = 1;
  while (y != ac)
    {
      if (my_strcmp(HELP, av[y], 0) == 0)
	return (0);
      else
	{
	  while (av[y][x] != '\0')
	    {
	      if (av[y][x] == '.')
		if (my_strcmp(FILE, av[y], x) == 0)
		  return (1);
	      x++;
	    }
	}
      x = 0;
      y++;
    }
  return (84);
}
