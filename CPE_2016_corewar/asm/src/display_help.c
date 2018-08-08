/*
** display_help.c for display_help in /home/jeremy.elkaim/CPE_2016_corewar/asmb/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Mar 31 11:42:28 2017 jeremy elkaim
** Last update Sun Apr  2 19:44:52 2017 jeremy elkaim
*/

#include "../include/corewar.h"
#include "../../my_lib/include/lib.h"

void	help(char *av)
{
  my_putstr("USAGE\n\t");
  my_putstr(av);
  my_putstr(" file_name[.s]\n\n");
  my_putstr("DESCRIPTION\n\t file_name\t");
  my_putstr("file in assembly language to be converted into");
  my_putstr("file_name.cor, an\n\t\t        ");
  my_putstr("executable in the Virtual Machine).\n");
}
