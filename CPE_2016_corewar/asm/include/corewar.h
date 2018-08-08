/*
** corewar.h for corewar in /home/jeremy.elkaim/CPE_2016_corewar/asmb/include
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Mar 31 11:44:11 2017 jeremy elkaim
** Last update Sat Apr  1 14:38:43 2017 Arnaud DEMANGE
*/

#ifndef _COR_H_
# define _COR_H

# define HELP		"-h\0"
# define FILE		".s\0"
# define COR		".cor\0"
# define MAGIC_NUMBER	"\x00\xea\x83\xf3"
# define BINARY_SPACE	63
# define NAME_LENGHT	2048
# include <unistd.h>

void	help(char *av);
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(char *str);
int     check_argv(int ac, char **av);
int	my_strcmp(char *src, char *dest, int j);
void	get_comment(int fd_second, int fd, char *origin);

#endif /* !COR_H_ */
