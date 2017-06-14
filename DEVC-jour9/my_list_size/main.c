/*
** main.c for  in /home/nicolas/horbac_n/my_list_size
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Wed Mar 29 15:58:46 2017 HORBACZ Nicolas
** Last update Wed Mar 29 22:24:42 2017 HORBACZ Nicolas
*/

#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void my_putchar(char c);
void  my_putstr(char *str);
t_list *my_params_in_list(int argc, char **argv);
void    my_rev_list(t_list **begin)
  

int main (int argc, char **argv)
{
  t_list        *list;

  list = my_params_in_list(argc, argv);
  while (list != NULL)
    {
      my_putstr(list->data);
      my_putchar('\n');
      list = list->next;
    }
  return(0);
}
