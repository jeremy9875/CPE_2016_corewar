/*
** core.c for core in /home/jeremy.elkaim/CPE_2016_corewar/asmb/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Mar 31 11:41:50 2017 jeremy elkaim
** Last update Sun Apr  2 19:58:17 2017 jeremy elkaim
*/
#include "../include/corewar.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "../../my_lib/include/lib.h"

char	*parse_file(int fd, char *origin, int i)
{
  int	a;
  char  *str;
  int   fd_second;

  a = 0;
  str = malloc(sizeof(char) * my_strlen(origin) * NAME_LENGHT);
  if (str == NULL)
    return (NULL);
  fd_second = open(origin, O_RDONLY);
  read(fd_second, str, 3000);
  while (str[i] != 't' && str[i + 1] != ' ' && str[i + 2] != '"')
    {
      while (a <= BINARY_SPACE)
	{
	  write(fd, "\x0", 2);
	  a++;
	}
      i++;
    }
  write(fd, "\x0", 1);
  write(fd, "\032", 1);
  get_comment(fd_second, fd, origin);
  free(str);
  return (0);
}

char	*take_file_name(char *argv)
{
  int	i;

  i = 0;
  while (argv[i] != '.')
    i++;
  my_strcpy(COR, argv, i);
  return (argv);
}

int	*display_name(int fd, char *argv)
{
  int	i;
  char  *str;

  str = malloc(sizeof(char) * 42);
  if (str == NULL)
    return (NULL);
  i = 0;
  while (argv[i] != '.')
    {
      str[i] = argv[i];
      write(fd, str + i, 1);
      i++;
    }
  free(str);
  return (0);
}

int	write_magic(char *argv)
{
  int	fd;
  char	*tmp_tab;
  char	tmp_name[NAME_LENGHT];
  int	i;

  i = 0;
  while (argv[i])
    {
      tmp_name[i] = argv[i];
      i++;
    }
  i = 0;
  tmp_tab = take_file_name(argv);
  fd = open(tmp_tab, O_RDWR | O_CREAT | O_TRUNC, 0666);
  write(fd, MAGIC_NUMBER, 4);
  display_name(fd, argv);
  parse_file(fd, tmp_name, i);
  return (0);
}

int	main(int ac, char **av)
{
  int	i;

  if (ac == 2)
    {
      i = check_argv(ac, av);
      if (i == 0 && ac == 2)
	help(av[0]);
      else if (i == 1)
	write_magic(av[1]);
      else if (i == 84)
	return (84);
    }
  else
    return (84);
  return (0);
}
