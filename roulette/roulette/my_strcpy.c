/*
** my_strcpy.c for  in /home/nicolas/horbac_n/my_strcpy
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 23 12:12:47 2017 HORBACZ Nicolas
** Last update Thu Mar 23 13:48:21 2017 HORBACZ Nicolas
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      ++i;
    }
  dest[i] = '\0';
  return (dest);
}
