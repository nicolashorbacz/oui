/*
** my_strlen.c for  in /home/nicolas/horbac_n/my_strlen
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Wed Mar 22 10:36:33 2017 HORBACZ Nicolas
** Last update Wed Mar 22 13:20:39 2017 HORBACZ Nicolas
*/

void	my_putchar(char c);

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    {
      ++i;
    }
  return (i);
}
