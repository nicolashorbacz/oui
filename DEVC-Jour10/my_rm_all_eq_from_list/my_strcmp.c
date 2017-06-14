/*
** my_strcmp.c for  in /home/nicolas/horbac_n/my_strcmp
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Mar 23 13:53:07 2017 HORBACZ Nicolas
** Last update Thu Mar 23 16:41:41 2017 HORBACZ Nicolas
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    i++;
  if (s1[i] == '\0' && s2[i] == '\0')
    return (0);
  if (s1[i] > s2[i])
    return (1);
  if (s1[i] < s2[i])
    return (-1);
  return (0);
}
