/*
** ia.c for  in /home/pessy_f/rendu/Allum1
**
** Made by Pessy Florian
** Login   <pessy_f@epitech.net>
**
** Started on  Thu Jul 10 20:12:40 2014 Pessy Florian
** Last update Sun Jul 13 19:47:13 2014 Pessy Florian
*/

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

char	**ia(char **tab, int size)
{
  int	line;
  int	allum;
  int	i;

  aff_tab(tab);
  my_putstr("\nThe ia is thinking...\n");
  line = random() % (size + 1);
  allum = random() % 50;
  while (line == 0 || allum > count_allum(line, tab) || allum == 0)
    {
      line = random() % (size + 1);
      allum = random() % 50;
    }
  my_putstr("\nThe ia take ");
  my_putnbr(allum);
  my_putstr(" matche(s) on the line ");
  my_putnbr(line);
  my_putstr(".\n");
  tab = new_tab(tab, line, allum);
  return (tab);
}
