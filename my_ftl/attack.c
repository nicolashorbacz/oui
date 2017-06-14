/*
** attack.c for  in /home/nicolas/horbac_n
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Thu Apr 13 15:01:21 2017 HORBACZ Nicolas
** Last update Sat Apr 15 09:44:14 2017 HORBACZ Nicolas
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "ftl.h"
#include "function.h"

int	attack(t_ship *ship, int *enemy_presence, t_enemy *enemy)
{
  int   random;

  my_putstr("Vous attaquez le vaisseau ennemi\n");
  enemy->pv = enemy->pv - ship->weapon->damage;
  my_putstr("L'ennemi a subi: ");
  my_put_nbr(enemy->pv);
  my_putstr(" de dommages\n");
  srand(time(NULL));
  random = (rand()% 100) + 1;
  if (random <= 25)
    {
      my_putstr("Vous avez evite une attaque ennemie\n\n");
    }
  else
    {
      ship->hull = ship->hull - enemy->damage;
      my_putstr("Vous avez subi une attaque ennemie\n\n");
    }
  if (enemy->pv <= 0)
    {
      my_putstr("Vous avez detruit le vaisseau ennemi !!!\n");
      *enemy_presence = 0;
    }
  return (0);
}
