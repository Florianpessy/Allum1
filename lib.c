/*
** lib.c for  in /home/pessy_f/rendu/Allum1
**
** Made by Pessy Florian
** Login   <pessy_f@epitech.net>
**
** Started on  Thu Jul 10 20:14:21 2014 Pessy Florian
** Last update Thu Jul 10 20:14:48 2014 Pessy Florian
*/

#include <stdlib.h>
#include <stdio.h>
#include "header.h"

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

void    aff_tab(char **tab)
{
  int   i;

  i = 0;
  while (tab[i] != NULL)
    {
      if (i <= 8)
	{
	  my_putchar('0');
	  my_putnbr(i + 1);
	  my_putchar(' ');
	  my_putstr(tab[i]);
	  my_putchar('\n');
	  i = i + 1;
	}
      else
	{
	  my_putnbr(i + 1);
	  my_putchar(' ');
	  my_putstr(tab[i]);
	  my_putchar('\n');
	  i = i + 1;
	}
    }
}

int     count(char *str)
{
  int   i;
  int   count;

  i = 0;
  count= 0;
  while (str[i] != '\0')
    {
      if (str[i] == ' ')
        count = count + 1;
      i = i + 1;
    }
  return (count);
}

int     my_strlen(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}
