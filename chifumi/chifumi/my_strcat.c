/*
** my_strcat.c for  in /home/nicolas/horbac_n/my_strcat
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 23 16:48:06 2017 HORBACZ Nicolas
** Last update Thu Mar 23 19:42:47 2017 HORBACZ Nicolas
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    {
      ++i;
    }
  while (src[j] != '\0') 
    {
      dest[i] = src[j];
      ++j;
      ++i;
    }
  dest[i] = '\0';
  return (dest);
}
