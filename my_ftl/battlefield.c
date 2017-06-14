/*
** battlefield.c for  in /home/nicolas/horbac_n
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Apr 13 17:07:39 2017 HORBACZ Nicolas
** Last update Fri Apr 14 18:57:56 2017 HORBACZ Nicolas
*/

#include <stdlib.h>
#include "ftl.h"
#include "function.h"

int		battlefield(t_ship *ship, int *enemy_presence, t_enemy *enemy)
{
  while ((*enemy_presence != 0) && (ship->hull > 0))
    {
      orders(ship, enemy_presence, enemy);
      my_putstr("*********************************\n");
      my_putstr("  Vos PV : ");
      my_put_nbr(ship->hull);
      my_putstr("       PV ennemi: ");
      my_put_nbr(enemy->pv);
      my_putstr(" \n");
      my_putstr("*********************************\n");
    }
  free(enemy);
  if (ship->hull <= 0)
    {
      my_putstr("Votre vaisseau a ete detruit.....\n");
      my_putstr("GAME OVER\n");
      return (0);
    }
  orders(ship, enemy_presence, enemy);
  return (0);
}
