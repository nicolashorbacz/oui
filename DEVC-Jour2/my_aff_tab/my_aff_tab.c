/*
** my_aff_tab.c for  in /home/nicolas/DEVC-Jour2/my_aff_tab
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Tue Mar 21 09:32:56 2017 HORBACZ Nicolas
** Last update Tue Mar 21 18:33:33 2017 HORBACZ Nicolas
*/

void	my_putchar(char c);

void	my_aff_tab(char str[])
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
