/*
** allum1.c for  in /home/pessy_f/rendu/Allum1
**
** Made by Pessy Florian
** Login   <pessy_f@epitech.net>
**
** Started on  Thu Jul 10 20:09:45 2014 Pessy Florian
** Last update Fri Jul 18 10:50:14 2014 Pessy Florian
*/

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

char    **new_tab(char **tab, int line, int allum)
{
  int   i;

  i = my_strlen(tab[line - 1]);
  tab[line - 1][i - allum] = '\0';
  return (tab);
}

int	choose_line(int	size, char **tab)
{
  int	a;
  char	buffer[4096];
  int	i;

  my_putstr("\nChoose a line : ");
  if (read(0, buffer, 4096) <= 0)
    exit(1);
  new_buffer(buffer);
  i = check_buffer(buffer);
  while (i != 0 || my_getnbr(buffer) > size || *buffer == '\0'
	 || my_getnbr(buffer) <= 0 || count_allum(my_getnbr(buffer), tab) == 0)
    i = re_line(buffer);
  a = my_getnbr(buffer);
  return (a);
}

char	*creat_allum(int size, int i, char *str)
{
  int	x;
  int	y;
  int	a;
  int	z;

  z = 0;
  x = 0;
  y = 0;
  i = 0;
  a = 1;
  if ((str = malloc(sizeof(char*) * size * size * 2)) == NULL)
    return (0);
  while (x != size)
    {
      while (y++ != size - x - 1)
	str[z++] = ' ';
      y = 0;
      while (i-- != 0 - a)
	str[z++] = '|';
      a = a + 1;
      str[z++] = '\n';
      x = x + 1;
      i = x;
    }
  return (str);
}

void	*game(char **tab, int size, int players)
{
  int	a;
  int	b;
  char	buffer[4096];
  int	i;
  int	count;

  while (42)
    {
      aff_tab(tab);
      a = choose_line(size, tab);
      count = count_allum(a, tab);
      my_putstr("\nYou can choose ");
      my_putnbr(count);
      my_putstr(" matches.\n");
      b = choose_matche(count, tab);
      tab = new_tab(tab, a, b);
      if (end_game(tab) == 0)
	return (0);
      if (players == 1)
	tab = ia(tab, size);
      if (end_game(tab) == 0)
	return (0);
    }
}

int	main(int ac, char **av)
{
  char	**tab;
  char	*str;
  char	buffer[4096];
  int	i;
  int	size;
  int	players;

  my_putstr("Number of player(s) ?: ");
  my_read(buffer);
  new_buffer(buffer);
  i = check_buffer(buffer);
  while (i != 0 || *buffer == '\0' || my_getnbr(buffer) <= 0)
    i = re_players(buffer);
  players = my_getnbr(buffer);
  my_putstr("\nNumber of floor(s) ?: ");
  my_read(buffer);
  new_buffer(buffer);
  i = check_buffer(buffer);
  while (i != 0 || *buffer == '\0' || my_getnbr(buffer) <= 0)
    i = re_etages(buffer);
  size = my_getnbr(buffer);
  str = creat_allum(my_getnbr(buffer), i, str);
  tab = str_to_wordtab(str);
  game(tab, size, players);
}
