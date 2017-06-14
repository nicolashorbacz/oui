/*
** my_params_to_tabs.c for  in /home/nicolas/horbac_n/my_params_to_tab
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Mar 28 15:23:00 2017 HORBACZ Nicolas
** Last update Tue Mar 28 17:59:59 2017 HORBACZ Nicolas
*/

#include <stdlib.h>

char	**my_str_to_wordtab(char *str);
char	*my_strdup(char *str);
int	my_strlen(char *str);

struct	s_stock_par
{
  int	size_param;     /* longueur du paramètre */
  char	*str;           /* adresse du paramètre  */
  char	*copy;          /* copie du paramètre    */
  char	**tab;          /* renvoyé par my_str_to_wordtab  */
};

struct	s_stock_par	*my_params_to_tab(int ac, char **av)
{
  int	i;

  i = 0;
  struct s_stock_par *stock;
  stock = malloc(sizeof(struct s_stock_par) * (ac + 1));
  while (i < ac)
    {
      stock[i].size_param = my_strlen(av[i]);
      stock[i].str = (av[i]);
      stock[i].copy = my_strdup(av[i]);
      stock[i].tab = my_str_to_wordtab(av[i]);
      i++;
    }
  return (stock);
  free (stock);
}
