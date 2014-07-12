/*
** header.h for  in /home/pessy_f/rendu/Allum1
**
** Made by Pessy Florian
** Login   <pessy_f@epitech.net>
**
** Started on  Thu Jul 10 20:12:26 2014 Pessy Florian
** Last update Sat Jul 12 11:32:51 2014 Pessy Florian
*/

#ifndef HEADER_H_
# define HEADER_H_

/*
** allum1
*/

int	main(int ac, char **av);
void    *game(char **tab, int size, int players);
char	*creat_allum(int size, int i, char *str);
char	**new_tab(char **tab, int line, int allum);
int	choose_line(int size, char **tab);

/*
** my_getnbr
*/

int	my_power_rec(int nb, int power);
int	my_getnbr(char *str);

/*
** wordtab
*/

char	**str_to_wordtab(char *str);

/*
** ia
*/

char	**ia(char **tab, int size);
int	fine_line(char **tab);
int	count_line(char **tab);

/*
** lib
*/

int	my_putchar(char c);
int	my_putstr(char *str);
void	aff_tab(char **tab);
int	count(char *str);
int	my_strlen(char *str);

/*
** lib2
*/

char	*new_buffer(char *buffer);
int	check_buffer(char *buffer);
int	re_etages(char *buffer);
int	re_line(char *buffer);
int	re_allum(char *buffer);

/*
** lib3
*/

int	count_allum(int line, char **tab);
int	my_put_sign(int nb);
int	my_putnbr(int nb);
int	total_count(char **tab);
int	re_player(char *buffer);

/*
** lib4
*/

int	choose_matche(int count, char **tab);
int	end_game(char **tab);

#endif	/* !HEADER_H_ */
