/*
** fill_core.c for fill_core in /home/arnaud.d/CPE_2016_corewar/asmb/src
** 
** Made by Arnaud DEMANGE
** Login   <arnaud.d@epitech.net>
** 
** Started on  Sat Apr  1 14:51:30 2017 Arnaud DEMANGE
** Last update Sun Apr  2 19:43:57 2017 jeremy elkaim
*/
#include "../include/corewar.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "../../my_lib/include/lib.h"

void	get_comment(int fd_second, int fd, char *argv)
{
  char	str[3000];
  int	i;

  i = 0;
  fd_second = open(argv, O_RDONLY);
  read(fd_second, str, 3001);
  while (str[i])
    {
      if (str[i] == 't' && str[i + 1] == ' ' && str[i + 2] == '"')
        {
          i = i + 3;
          while (str[i] != '"')
            {
              write(fd, str + i, 1);
              i++;
            }
        }
      i++;
    }
}
