/*
** lib3.c for  in /home/pessy_f/rendu/Allum1
**
** Made by Pessy Florian
** Login   <pessy_f@epitech.net>
**
** Started on  Thu Jul 10 20:15:01 2014 Pessy Florian
** Last update Sun Jul 13 19:45:06 2014 Pessy Florian
*/

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int	count_allum(int	line, char **tab)
{
  int	i;
  int	count;

  count = 0;
  i = 0;
  while (tab[line - 1][i] != '\0')
    {
      if (tab[line - 1][i] == '|')
	count = count + 1;
      i = i + 1;
    }
  return (count);
}

int     my_put_sign(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  my_putnbr(nb);
}

int     my_putnbr(int nb)
{
  int a;

  a = 1;
  while ((nb / a) > 9)
    a = a * 10;
  while (a != 0)
    {
      my_putchar('0' + (nb / a) % 10);
      a = a / 10;
    }
}

int	total_count(char **tab)
{
  int	x;
  int	y;
  int	count;

  count = 0;
  y = 0;
  x = 0;

  while (tab[x] != NULL)
    {
      while (tab[x][y] != '\0')
	{
	  if (tab[x][y] == '|')
	    count = count + 1;
	  y = y + 1;
	}
      y = 0;
      x = x + 1;
    }
  return (count);
}

int     re_players(char *buffer)
{
  int   i;

  my_putstr(buffer);
  my_putstr(" is not a good number.\n");
  my_putstr("Number of player(s) ?:");
  if (read(0, buffer, 4096) <= 0)
    exit(1);
  new_buffer(buffer);
  i = check_buffer(buffer);
  return (i);
}
