/*
** my_strupcase.c for  in /home/nicolas/horbac_n/my_strupcase
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Mar 21 15:03:45 2017 HORBACZ Nicolas
** Last update Tue Mar 21 18:41:24 2017 HORBACZ Nicolas
*/

void	my_putchar(char c);

char   *my_strupcase(char str[])
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	{     
	  str[i] = str[i] - 32;
	}
      i = i + 1;
    }
  return (str);
}
