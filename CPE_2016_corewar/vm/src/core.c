/*
** core.c for core in /home/jeremy.elkaim/CPE_2016_corewar/vm/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Mar 31 11:46:37 2017 jeremy elkaim
** Last update Sun Apr  2 19:45:31 2017 jeremy elkaim
*/
#include "../include/corewar.h"
#include "../../my_lib/include/lib.h"

void	help(char **av)
{
  my_putstr("USAGE\n\t./corewar [-dump nbr_cycle]");
  my_putstr("[[-n prog_number] [-a load_address] prog_name] ...\n");
  my_putstr("\nDESCIRPTION\n\t-dump nbr_cycle dumps the memory after");
  my_putstr("the nbr_cycle execution (if the round isn't\n\t\t\talready");
  my_putstr(" over) with the following format: 32 bytes/line in\n");
  my_putstr("\t\t\thexadecimal (A0BCDEFE1DD3...)\n\t-n prog_number");
  my_putstr("\tsets the next program's number. By default, the first free");
  my_putstr(" number\n\t\t\tin the parameter order\n\t-a load_address");
  my_putstr(" sets the next program's loading address. When no address is\n");
  my_putstr("\t\t\tspecified, optimize the addresses so that the processes");
  my_putstr("are as far\n\t\t\taway from each other as possible. The");
  my_putstr("addresses are MEM_SIZE modulo\n");
}
