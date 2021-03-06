/*
** add_element_at_tail.c for  in /home/nicolas/Documents/etna/LibList/DoublyLinkedList
** 
** Made by HORBACZ Nicolas
** Login   <horbac_n@etna-alternance.net>
** 
** Started on  Mon Jun 26 15:17:25 2017 HORBACZ Nicolas
** Last update Mon Jun 26 15:47:47 2017 HORBACZ Nicolas
*/

#include "liblist.h"
#include <stdlib.h>
#include <stdio.h>

t_list          *add_element_at_tail(t_list *list, int index, char *value)
{
  t_list        *element;

  element = malloc(sizeof(*element));
  if (element == NULL)
    return 0;
  if (list->prev != NULL)
    {
      my_putstr("impossible d'ajouter l'element");
      return 0;
    }
  element->index = index;
  element->value = value;
  element->next = list;
  list->prev = element;
  return element;
}
