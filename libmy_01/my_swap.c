/*
** swap.c for  in /home/nicolas/horbac_n/my_swap
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Wed Mar 22 12:36:28 2017 HORBACZ Nicolas
** Last update Wed Mar 22 12:55:59 2017 HORBACZ Nicolas
*/

void	my_swap(int *a, int *b)
{
  int	c;

  c = *b;
  *b = *a;
  *a = c;
}
