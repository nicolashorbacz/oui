/*
** main.c for  in /home/nicolas/horbac_n/my_strcpy
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 23 12:14:30 2017 HORBACZ Nicolas
** Last update Thu Mar 23 13:50:10 2017 HORBACZ Nicolas
*/

#include <stdio.h>

char	*my_strcpy(char *dest, char *src);
void	my_putchar(char c);

int	main()
{
  char	tab []= "Mon tableau caca LASOD sdfgfd $^ ";
  char	tab_cpy[50] = {0};

  my_strcpy(tab_cpy, tab);
  printf("le tableau original est: %s \n", tab);
  printf("la copie est: %s \n", tab_cpy);  
  return (0);
}
  
