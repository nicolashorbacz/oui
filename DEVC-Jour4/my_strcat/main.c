/*
** main.c for  in /home/nicolas/horbac_n/my_strcat
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 23 16:54:49 2017 HORBACZ Nicolas
** Last update Thu Mar 23 19:40:53 2017 HORBACZ Nicolas
*/

#include <stdio.h>

char	*my_strcat(char *dest, char *src);

int	main()
{
  char	chaine1[100] = "Salut gros ";
  char	chaine2[] = "kikito";


  my_strcat(chaine1, chaine2); 
  printf("chaine1 vaut : %s\n", chaine1);
  printf("chaine2 vaut toujours : %s\n", chaine2);
  return 0;
}
