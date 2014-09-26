/*
** my_getnbr.c for  in /home/pessy_f/rendu/Piscine-C-lib
**
** Made by Pessy Florian
** Login   <pessy_f@epitech.net>
**
** Started on  Wed Mar 12 09:23:42 2014 Pessy Florian
** Last update Thu Sep 18 15:09:37 2014 Pessy Florian
*/

int	my_getnbr(char *str)
{
  int	nb;
  int	j;

  nb = 0;
  j = 1;
  if (str[j - 1] == '-')
    {
      while (str[j] < '0' || str[j] > '9')
	{
	  nb = 10 * nb + (str[j] - '0');
	  j = j + 1;
	}
      nb = -nb;
    }
  else
    {
      j = 0;
      while (str[j] >= '0' && str[j] <= '9')
	{
	  nb = 10 * nb + (str[j] - 48);
	  j = j + 1;
	}
      return (nb);
    }
}
