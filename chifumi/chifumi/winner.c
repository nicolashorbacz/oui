/*
** winner.c for  in /home/nicolas/horbac_n/chifumi
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Fri Mar 31 23:29:17 2017 HORBACZ Nicolas
** Last update Sat Apr  1 01:22:41 2017 HORBACZ Nicolas
*/

#include "fonction.h"

int	winner (int player, int cpu)   //retourne 1 si le joueur gagne et 2 si cpu gagne    
{
  if (player == 1 && cpu == 2)
    {
      my_putstr("Vous remportez la manche!\n\n");
      return 1;
    }
  if (player == 2 && cpu == 1)
    {
      my_putstr("Vous avez perdu la manche!\n\n");
      return 2;
    }
  if (player == 1 && cpu == 3)
    {
      my_putstr("Vous avez perdu la manche!\n\n");
      return 2;
    }
  if (player == 3 && cpu == 1)
    {
      my_putstr("Vous remportez la manche!\n\n");
      return 1;
    }
  if (player == 2 && cpu == 3)
    {
      my_putstr("Vous remportez la manche!\n\n");
      return 1;
    }
  if (player == 3 && cpu == 2)
    {
      my_putstr("Vous avez perdu la manche!\n\n");
      return 2;
    }
  else
    {
      my_putstr("Egalité!\n\n");
      return 0;
    }
}
