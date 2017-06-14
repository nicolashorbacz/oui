/*
** jouerModeClassique.c for  in /home/nicolas/horbac_n/chifumi
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Fri Mar 31 18:21:33 2017 HORBACZ Nicolas
** Last update Sat Apr  1 14:41:41 2017 HORBACZ Nicolas
*/

#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"

void		classic_mode(int duration)
{
  int		player_choice;
  int		cpu_choice;
  int		i;
  int		round_winner;
  score_d	score;
  
  i = 0;
  score.player = 0;
  score.cpu = 0;
  while ((i <= duration) && (score.player <= duration || score.cpu <= duration))
    {
      player_choice = choice_player(1, 3);
      cpu_choice = choice_cpu();
      round_winner = winner(player_choice, cpu_choice);
      display_score(round_winner, &score);
      i++;
    }
}
