/*
** my_next_char.c for  in /home/nicolas/horbac_n/my_next_char
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Mar 20 14:25:05 2017 HORBACZ Nicolas
** Last update Mon Mar 20 15:58:06 2017 HORBACZ Nicolas
*/
#include <unistd.h>

char	my_prev_char(char c)
{ 
  if (c == 'A')
    {
      c = 'Z';
    }
  else if (c == 'a')
    {
      c = 'z';
    }
  else if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
    {
      c = ' ';
    }
  else
    {
      c = c - 1;
    }
  return c;
}
