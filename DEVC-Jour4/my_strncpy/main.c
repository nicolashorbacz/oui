/*
** main.c for  in /home/nicolas/horbac_n/my_strcpy
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 23 12:14:30 2017 HORBACZ Nicolas
** Last update Thu Mar 23 18:43:19 2017 HORBACZ Nicolas
*/

#include <stdio.h>

char	*my_strncpy(char *dest, char *src, int n);

int	main()
{
  char	tab []= "AbCdEX\n";
  char	tab_cpy[50] = {0};

  my_strncpy(tab_cpy, tab, 5);
  printf("le tableau original est: %s \n", tab);
  printf("la copie est: %s \n", tab_cpy);  
  return (0);
}
  
