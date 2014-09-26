/*
** lib4.c for  in /home/pessy_f/rendu/Allum1
**
** Made by Pessy Florian
** Login   <pessy_f@epitech.net>
**
** Started on  Thu Jul 10 20:15:38 2014 Pessy Florian
** Last update Thu Jul 17 15:34:22 2014 Pessy Florian
*/

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void	my_read(char buffer[4096])
{
  if (read(0, buffer, 4096) <= 0)
    exit(1);
}

int	choose_matche(int count, char **tab)
{
  int	b;
  char	buffer[4096];
  int	i;

  my_putstr("\nNumber of matches: ");
  if (read(0, buffer, 4096) <= 0)
    exit(1);
  new_buffer(buffer);
  i = check_buffer(buffer);
  while (i != 0 || my_getnbr(buffer) > count
	 || *buffer == '\0'
	 || my_getnbr(buffer) <= 0)
    i = re_allum(buffer);
  b = my_getnbr(buffer);
  return (b);
}

int	end_game(char **tab)
{
  if (total_count(tab) == 0)
    {
      my_putstr("\nEnd of the game !\n");
      free(tab);
      return (0);
    }
}
