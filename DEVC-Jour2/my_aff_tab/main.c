/*
** main.c for  in /home/nicolas/DEVC-Jour2/my_aff_tab
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Mar 21 09:26:44 2017 HORBACZ Nicolas
** Last update Tue Mar 21 09:32:38 2017 HORBACZ Nicolas
*/
#include <unistd.h>

void my_aff_tab(char str[]);
void  my_putchar(char c);

int   main()
{
  char str[10] = "bOnjour ;";
  char test[3] = "OK!";

  my_aff_tab(str);
  my_putchar('\n');

  my_aff_tab(test);
  my_putchar('\n');

  return (0);
}
