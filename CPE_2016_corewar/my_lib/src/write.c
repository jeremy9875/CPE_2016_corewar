/*
** write.c for write in /home/jeremy.elkaim/CPE_2016_corewar/my_lib/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Mar 31 11:45:37 2017 jeremy elkaim
** Last update Fri Mar 31 15:06:13 2017 jeremy elkaim
*/
#include <stdlib.h>
#include <unistd.h>
#include "../include/lib.h"

void	my_putchar(char c)
{
  write (1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int	my_strlen(char *av)
{
  int	i;

  i = 0;
  while (av[i] != '\0')
    i = i + 1;
  return (i);
}

char	*my_strcpy(char *src, char *dest, int i)
{
  int	count;

  count = 0;
  while (src[count] != '\0')
    {
      dest[i] = src[count];
      i++;
      count++;
    }
  dest[i] = '\0';
  return (dest);
}

int	my_strcmp(char *src, char *dest, int j)
{
  int   i;
  int   tmp;

  i = 0;
  tmp = 0;
  while (src[i] != '\0')
    {
      if (src[i] != dest[j])
	tmp = 1;
      i++;
      j++;
    }
  return (tmp);
}
