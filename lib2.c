/*
** lib2.c for  in /home/pessy_f/rendu/Allum1
**
** Made by Pessy Florian
** Login   <pessy_f@epitech.net>
**
** Started on  Thu Jul 10 20:13:27 2014 Pessy Florian
** Last update Sat Jul 12 11:42:27 2014 Pessy Florian
*/

#include <stdlib.h>
#include <stdio.h>
#include "header.h"

char	*new_buffer(char *buffer)
{
  int	i;

  i = 0;
  while (buffer[i] != '\0')
    {
      if (buffer[i] == '\n')
	buffer[i] = '\0';
      i = i + 1;
    }
  return (buffer);
}

int	check_buffer(char *buffer)
{
  int	i;

  i = 0;
  while (buffer[i] != '\0')
    {
      if (buffer[i] >= 48 && buffer[i] <= 57)
	i = i + 1;
      else
	return (1);
    }
  return (0);
}

int	re_etages(char *buffer)
{
  int	i;

  my_putstr(buffer);
  my_putstr(" is not a good number.\n");
  my_putstr("Number of floor(s) ?: ");
  if (read(0, buffer, 4096) <= 0)
    exit(1);
  new_buffer(buffer);
  i = check_buffer(buffer);
  return (i);
}

int	re_line(char *buffer)
{
  int	i;

  my_putstr(buffer);
  my_putstr(" is not a good number.\n");
  my_putstr("Choose a line: ");
  if (read(0, buffer, 4096) <= 0)
    exit(1);
  new_buffer(buffer);
  i = check_buffer(buffer);
  return (i);
}

int	re_allum(char *buffer)
{
  int	i;

  my_putstr(buffer);
  my_putstr(" is not a good number.\n");
  my_putstr("Number of matche(s): ");
  if (read(0, buffer, 4096) <= 0)
    exit(1);
  new_buffer(buffer);
  i = check_buffer(buffer);
  return (i);
}
