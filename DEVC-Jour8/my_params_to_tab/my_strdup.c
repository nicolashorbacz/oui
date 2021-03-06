/*
** my_strdup.c for  in /home/nicolas/horbac_n/my_strdup
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Mar 27 11:29:36 2017 HORBACZ Nicolas
** Last update Mon Mar 27 12:51:52 2017 HORBACZ Nicolas
*/

#include <stdlib.h>

int	my_strlen(char *str);
char	*my_strcpy(char *dest, char *src);

char	*my_strdup(char *str)
{
  int	i;
  char	*dest;

  i = my_strlen(str) + 1;
  dest = malloc(i * sizeof(char));
  if (dest == NULL)
    {
      return (NULL);
    }
  dest = my_strcpy(dest, str);
  dest [i - 1] = '\0';
  return (dest);
  free(dest);
}
