/*
** wordtab.c for  in /home/pessy_f/rendu/Allum1
**
** Made by Pessy Florian
** Login   <pessy_f@epitech.net>
**
** Started on  Thu Jul 10 20:17:04 2014 Pessy Florian
** Last update Sun Jul 13 19:48:42 2014 Pessy Florian
*/

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

char    **str_to_wordtab(char *str)
{
  char  **tab;
  int   i;
  int   a;
  int   b;
  int   counts;

  counts = count(str);
  i = 0;
  a = 0;
  if ((tab = malloc(sizeof(char*) * (counts + 2))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      b = 0;
      if ((tab[a] = malloc(sizeof(char) * (my_strlen(str)) + 1)) == NULL)
        return (NULL);
      while (str[i] != '\n' && str[i] != '\0')
	tab[a][b++] = str[i++];
      tab[a][b] = '\0';
      while (str[i] == '\n')
        i = i + 1;
      a = a + 1;
    }
  tab[a] = NULL;
  return (tab);
}
